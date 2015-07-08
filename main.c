#include <sw_uart.h>
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

unsigned int arg1, arg2;
unsigned long res;
extern void MULT16(void);

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