#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <delays.h>
#include <pic18f45k20.h>

#include "buzzer.h"
#include "sonar.h"
#include "uart.h"

#pragma config FOSC=INTIO7, FCMEN=OFF, IESO=OFF, PWRT=OFF, BOREN=OFF
#pragma config BORV=30, WDTEN=ON, WDTPS=15, MCLRE=ON, HFOFST=ON
#pragma config LPT1OSC=OFF, PBADEN=OFF, CCP2MX=PORTBE, STVREN=OFF
#pragma config LVP=OFF, XINST=OFF, CP0=OFF, CP1=OFF, CP2=OFF
#pragma config CP3=OFF, CPB=OFF, CPD=OFF, WRT0=OFF, WRT1=OFF
#pragma config WRT2=OFF, WRT3=OFF, WRTB=OFF, WRTC=OFF, WRTD=OFF
#pragma config EBTRB=OFF

//#include "bit_settings.h"
#include "my_i2c.h"
#include "font.h"
#include "ssd1306.h"
#include "bargraph.h"

char error[] = "ERROR commande  \n\r";
char Retour[] = "\n\r";
char EnterMenu[]= "\n\r*Menu options*\n\r Entrez ON/OFF \n\r Pour activer/desactiver le sonar\n\r";
char quit[] = "Exit Menu  \n\r";
char ScrollBuffer[10];
int index = 0;
unsigned int distance = 0;
volatile int j=0;

void init();

void interrupt high_isr (void)
{
    if ((PIR1bits.TMR1IF==1)&&(PIE1bits.TMR1IE == 1))
    {
            if (distance<25)
            {
                TRISBbits.RB3=0;
                TMR1H = 172;             // preset for timer1 MSB register
                TMR1L = 176;             // preset for timer1 LSB register
                //0 sec
            }
            else if ((distance>=25)&&(distance<40))
            {
                TRISBbits.RB3=~TRISBbits.RB3;
                TMR1H = 137;             // preset for timer1 MSB register
                TMR1L = 250;             // preset for timer1 LSB register
                // 0.1s
            }
            else if ((distance>=40)&&(distance<70))
            {
                TRISBbits.RB3=~TRISBbits.RB3;
                TMR1H = 58;             // preset for timer1 MSB register
                TMR1L = 36;             // preset for timer1 LSB register

                // 0.1s
            }
            else
            {
                j=0;
                TRISBbits.RB3=0;

                do{
                    j++;
                } while (j < 16000);

               TRISBbits.RB3=1;
               TMR1H = 0;             // preset for timer1 MSB register
               TMR1L = 222;             // preset for timer1 LSB register
            }

            T1CONbits.TMR1ON  = 1;
            PIR1bits.TMR1IF = 0;    // Timer1 interrupt Flag cleared
    }

    if(RCIF) {
        if(RCREG == '�') {
            UART_Write_Text(EnterMenu);
            Mode = 0;
            index = 0;
        }
        else if(RCREG == 27 && Mode == 0) {
            Mode = 1;
            UART_Write_Text(quit);
            UART_Write_Text(Retour);
        }
        else if(RCREG == 0x0D) {
            ScrollBuffer[index] = '\0';
            index = 0;
            BufferReady = 1;
            UART_Write_Text(Retour);
        }
        else {
            BufferReady = 0;
            ScrollBuffer[index] = RCREG;
            TXREG = RCREG;
            index++;

            if(10 < index) {
                UART_Write_Text(error);
                index = 0;
            }
        }
    }
}

void main()
{
  char* temp;
  char number[4];
  int count = 0;
  
  init();
  
  while (1) {
      //distance = getFilteredData();
      if(SonarReady == 0) {
          distance = 1000;
      }
      else {
          distance = getData();
      }

      if (BufferReady == 1) {
          DataCommand(ScrollBuffer);
      }

      setBargraph(distance);

      if (distance > 100) {
        TRISBbits.RB3 = 1;      // Disable RB3 output
        PIE1bits.TMR1IE = 0;    // Timer1 interrupt disabled
      }
      else {
        PIE1bits.TMR1IE = 1;    // Timer1 interrupt enabled
      }

      ++count;

      if (2048 < count) {
          if (distance == 1000) {
              temp = "888";
          }
          else {
              temp = getChar(distance);
          }

          for (int i = 0; i < 4; ++i) {
              number[i] = temp[i];
          }

          Oled_SetFont(Segment_25x40, 25, 40, 46, 58);
          Oled_Text(number, 30, 3);

          DataTransfert(number);

          count = 0;
      }

      CLRWDT();
    }
}

void init()
{
  OSCCON = 0b01100010;
  
  UART_Init();

  initBargraph();

  initSonar();

  initBuzzer();

  song();

  CLRWDT();

  //INIT OLED
    I2C_Close();              // Close the  I2C Bus
    I2C_Init(1);             // I2C 400kHz, 20MHz-CRYSTAL
    Oled_Init();
    Oled_SetFont(Terminal12x16, 12, 16, 32,127);
    Oled_FillScreen(0x00, 0, 0);
    Oled_ConstText("SONAR", 35, 0);
    Oled_Text("!", 110, 0);
    Oled_ConstText("L=", 2, 5);
    Oled_ConstText("cm", 105, 5);
}