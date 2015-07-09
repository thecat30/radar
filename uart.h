/* 
 * File:   uart.h
 * Author: Rémi Monge
 *
 * Created on 8 juillet 2015, 07:51
 */
#ifndef UART_H
#define	UART_H


int BufferReady = 0;
int Mode = 1;
int SonarReady = 1;



extern void UART_Init(void);
extern void DataCommand(char* ScrollBuffer);
extern void DataTransfert(char* number);
extern char UART_TX_Empty();
extern char UART_Data_Ready();
extern char UART_Read();
extern void UART_Read_Text(char *Output, unsigned int length);
extern void UART_Write(char data);
extern void UART_Write_Text(char *text);


#endif