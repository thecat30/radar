#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <delays.h>
#include <pic18f45k20.h>

#include "uart.h"

#pragma config FOSC=INTIO7, FCMEN=OFF, IESO=OFF, PWRT=OFF, BOREN=OFF
#pragma config BORV=30, WDTEN=OFF, WDTPS=1, MCLRE=ON, HFOFST=ON
#pragma config LPT1OSC=OFF, PBADEN=OFF, CCP2MX=PORTBE, STVREN=OFF
#pragma config LVP=OFF, XINST=OFF, CP0=OFF, CP1=OFF, CP2=OFF
#pragma config CP3=OFF, CPB=OFF, CPD=OFF, WRT0=OFF, WRT1=OFF
#pragma config WRT2=OFF, WRT3=OFF, WRTB=OFF, WRTC=OFF, WRTD=OFF
#pragma config EBTRB=OFF

unsigned int distance = 0;
volatile int j=0;

void init();

void interrupt high_isr (void)
{
    if ((PIR1bits.TMR1IF==1)&&(PIE1bits.TMR1IE == 1))
    {
            if (distance<20)
            {
                TRISBbits.RB3=0;
                TMR1H = 245;             // preset for timer1 MSB register
                TMR1L = 149;             // preset for timer1 LSB register
                //0 sec
            }

            else if ((distance>=20)&&(distance<40))
            {
                TRISBbits.RB3=~TRISBbits.RB3;
                TMR1H = 241;             // preset for timer1 MSB register
                TMR1L = 62;             // preset for timer1 LSB register
                // 0.1s
            }

            else if ((distance>=40)&&(distance<70))
            {
                TRISBbits.RB3=~TRISBbits.RB3;
                TMR1H = 206;             // preset for timer1 MSB register
                TMR1L = 136;             // preset for timer1 LSB register

                // 0.1s
            }

            else
            {
                j=0;
                TRISBbits.RB3=0;
                do{
                    j++;
                }while(j<1000);
               TRISBbits.RB3=1;
               TMR1H = 194;             // preset for timer1 MSB register
               TMR1L = 98;             // preset for timer1 LSB register
            }

            T1CONbits.TMR1ON  = 1;
            PIR1bits.TMR1IF = 0;    // Timer1 interrupt Flag cleared
            }
}

void main()
{
  init();
  
  while (1) {
      distance = getFilteredData();
      DataTransfert(distance);

      if (distance>100)
        {
            TRISBbits.RB3 = 1;      // Disable RB3 output
            PIE1bits.TMR1IE = 0;    // Timer1 interrupt disabled
        }

        else
        {
            PIE1bits.TMR1IE = 1;    // Timer1 interrupt enabled
        }
    }
}

void init()
{
  OSCCON = 0b00110010;
  
  UART_Init();

  initSonar();

  initBuzzer();
}