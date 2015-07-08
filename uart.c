#include "uart.h"
#include <stdio.h>
#include <stdlib.h>
#include <delays.h>
#include <pic18f45k20.h>

void UART_Init()
{
        TRISB = 0xFF; //PORTB as Input
        nRBPU = 0;    //Enables PORTB Internal Pull Up Resistors
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

void DataTransfert(unsigned int distance)
{   
    char buffer;
    char number[4];
    sprintf(number, "%d", distance);
    if(ready==1)
    {
        UART_Write_Text(longueur); 
        UART_Write_Text(number);
        UART_Write_Text(backspace);  
    }
    Delay10KTCYx(1);
    
    buffer = UART_Read();
    if(buffer!='0') {
        if(buffer=='o')
        UART_Write_Text(gone);
        else if(buffer=='n')
        UART_Write_Text(stop);
                
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
	for(int i=0;i<length;i++)
		Output[i] = UART_Read();
}
void UART_Write(char data)
{
  while(!TRMT);
  TXREG = data;
}
void UART_Write_Text(char *text)
{
  int i;
  for(i=0;text[i]!='\0';i++)
	  UART_Write(text[i]);
}
