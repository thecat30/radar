#include "uart.h"
#include "sonar.h"
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
        TRISC6 = 0;// TX
        RCIF =1;
        RCIE =1;
}

void DataCommand(char* ScrollBuffer)
{
    char stop[] = "Sonar Stop\n\r";
    char gone[] = "Sonar Play\n\r";
    char error[] = "Unknown command  \n\r";
    char quit[] = "Exit Menu  \n\r";
            if(ScrollBuffer[0] == 'O' && ScrollBuffer[1] == 'N'  && ScrollBuffer[2] == '\0')
            {
                SonarReady = 1;
                UART_Write_Text(gone);
                UART_Write_Text(quit);
                BufferReady = 0;
                Mode = 1;
            }
            else if(ScrollBuffer[0] == 'O' && ScrollBuffer[1] == 'F' && ScrollBuffer[2] == 'F' && ScrollBuffer[3] == '\0')
            {
                SonarReady = 0;
                UART_Write_Text(stop);
                UART_Write_Text(quit);
                BufferReady = 0;
                Mode = 1;
            }
            else
            {
                UART_Write_Text(error);
                BufferReady = 0;
            }

            ScrollBuffer[0] = '\0';
}

void DataTransfert(char* number)
{
    char backspace[] = "cm\n\r";
    char longueur[] = "Longueur : ";

    if(Mode== 1 && SonarReady == 1)
    {
        UART_Write_Text(longueur);
        UART_Write_Text(number);
        UART_Write_Text(backspace);
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
