#include <sw_uart.h>
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <delays.h>
#include <pic18f45k20.h>

#define _XTAL_FREQ 4000000

#pragma config FOSC=INTIO7, FCMEN=OFF, IESO=OFF, PWRT=OFF, BOREN=OFF
#pragma config BORV=30, WDTEN=OFF, WDTPS=1, MCLRE=ON, HFOFST=ON
#pragma config LPT1OSC=OFF, PBADEN=OFF, CCP2MX=PORTBE, STVREN=OFF
#pragma config LVP=OFF, XINST=OFF, CP0=OFF, CP1=OFF, CP2=OFF
#pragma config CP3=OFF, CPB=OFF, CPD=OFF, WRT0=OFF, WRT1=OFF
#pragma config WRT2=OFF, WRT3=OFF, WRTB=OFF, WRTC=OFF, WRTD=OFF
#pragma config EBTRB=OFF

void DataTransfert(unsigned int);

int ready = 1;
char stop[] = "Sonar Stop\n\r";
char gone[] = "Sonar Play\n\r";
char backspace[] = "cm\n\r";
char longueur[] = "Longueur : ";

void UART_Init()
{
        //      BAUDCON: BAUD RATE CONTROL REGISTER           //
        BRG16 = 0; // 8-bit Baud Rate Generator is used
        SPBRG = 25; // Baudrate config
        BRGH = 1;
        //      TXSTA: TRANSMIT STATUS AND CONTROL REGISTER   //
        TX9 = 0;   // Selects 8-bit transmission
        TXEN = 1;  // Transmit enabled
        SYNC = 0;  // Asynchronous mode
        //     RCSTA: RECEIVE STATUS AND CONTROL REGISTER     //
        RX9 = 0;   // Selects 8-bit reception
        CREN = 1;  // Enables receiver
        SPEN = 1;  // Serial port enabled
        TRISC7 = 1;// RX
        TRISC6 = 1;// TX
        RCIF =1;
}

char UART_TX_Empty()
{
    return TRMT;
}
char UART_Data_Ready()
{
    return RCIF;
}
char UART_Read()
{
  if(RCIF)
    return RCREG;
  else
    return 0;
}
void UART_Read_Text(char *Output, unsigned int length)
{
    for(int i = 0; i < length; i++) {
        Output[i] = UART_Read();
    }
}
void UART_Write(char data)
{
    while(!TRMT);

    TXREG = data;
}
void UART_Write_Text(char *text)
{
    for(int i = 0; text[i] != '\0'; i++) {
        UART_Write(text[i]);
    }
}
void main(void)
{
    unsigned int distance = 0;

    OSCCON = 0b01010010;
    TRISB = 0xFF; //PORTB as Input
    nRBPU = 0;    //Enables PORTB Internal Pull Up Resistors
    UART_Init();
  
    ADCON0 = 0b00000100;
    ADCON1 = 0b00001110;
    ADCON2 = 0b10111010;
    ADCON0bits.ADON = 1;
    ADCON0bits.GO_NOT_DONE = 1;

    while (1) {
        distance = getFilteredData();
        DataTransfert(distance);
    }
}

void DataTransfert(unsigned int distance)
{   
    char buffer;
    char number[4];
    sprintf(number, "%d", distance);

    if (ready == 1)
    {
        UART_Write_Text(longueur); 
        UART_Write_Text(number);
        UART_Write_Text(backspace);  
    }
    Delay10KTCYx(100);
    
    buffer = UART_Read();

    if (buffer != '0') {
        if(buffer == 'o') {
            UART_Write_Text(gone);
        }
        else if(buffer=='n') {
            UART_Write_Text(stop);
        }
                
        switch(buffer) {
            case 'o' :
                ready = 1;
                break;
            case 'n' :
                ready = 0;
                break;
        }
    } 
}