
#ifndef MY_I2C_H
#define	MY_I2C_H
#include <xc.h>

#define I2C1_SCL	TRISCbits.TRISC3
#define I2C1_SDA	TRISCbits.TRISC4

void I2C_Init(unsigned char clock_output);
void I2C_Start(void);
void I2C_RepeatedStart(void);
void I2C_Stop(void);
void I2C_Idle(void);
void I2C_Close(void);
unsigned char I2C_ReadByte(unsigned char acknowledge);
unsigned char I2C_WriteByte(unsigned char data_out);

void I2C_Init(unsigned char clock_output){
SSPSTAT &= 0x3F;                // power on state
SSPCON1  = 0x00;                // power on state
SSPCON2  = 0x00;                // power on state
SSPCON1 |= 0b00001000;          // select serial mode
SSPSTAT |= 0b10000000;          // slew rate on/off
I2C1_SCL = 1;                    // Set SCL1 (PORTC,3) pin to input
I2C1_SDA = 1;                    // Set SDA1 (PORTC,4) pin to input
SSPCON1 |= 0b00100000;          // enable synchronous serial port

SSPADD = clock_output;          // clock = FOSC/(4 * (SSPADD + 1))
}
void I2C_Start(void){
//I2C_Idle();
SSPCON2bits.SEN = 1;
while(SSPCON2bits.SEN);
}
void I2C_RepeatedStart(void){
I2C_Idle();
SSPCON2bits.RSEN = 1;
while(SSPCON2bits.RSEN);
}
void I2C_Stop(void){
//I2C_Idle();
SSPCON2bits.PEN = 1;
while(SSPCON2bits.PEN);
}
void I2C_Idle(void){
while((SSPCON2 & 0x1F) | (SSPSTATbits.R_W))
continue;
}
void I2C_Close(void){
SSPCON1 &= 0xDF;
}
unsigned char I2C_ReadByte(unsigned char acknowledge){
unsigned char buffer_I2C = 0;
I2C_Idle();
if(((SSPCON1&0x0F)==0x08) || ((SSPCON1&0x0F)==0x0B))	//master mode only
   SSPCON2bits.RCEN = 1;           // enable master for 1 byte reception
   while (!SSPSTATbits.BF);        // wait until byte received
   buffer_I2C = SSPBUF;            // read byte

I2C_Idle();
if(acknowledge == 1)
  {
   SSPCON2bits.ACKDT = 0;
   SSPCON2bits.ACKEN = 1;
   while(SSPCON2bits.ACKEN);
  }
else
  {
   SSPCON2bits.ACKDT = 1;
   SSPCON2bits.ACKEN = 1;
   while(SSPCON2bits.ACKEN);
  }
return (buffer_I2C);              // return with read byte
}
unsigned char I2C_WriteByte(unsigned char data_out){
//I2C_Idle();
SSPBUF = data_out;        // write single byte to SSP1BUF
/*if(SSPCON1bits.WCOL)      // test if write collision occurred
return(1);                // if WCOL bit is set return negative #
else
  {
   if(((SSPCON1&0x0F)==0x08) || ((SSPCON1&0x0F)==0x0B)) //master mode only
       {*/
        while(SSPSTATbits.BF);       //wait until write cycle is complete
        //while(SSPSTATbits.RW);
	//I2C_Idle();                  //ensure module is idle
	//if(SSPCON2bits.ACKSTAT)      //test for ACK condition received
	//return(2);		      //Return NACK
       // else return(0);               //Return ACK
      // }
 // }return(0);
}
#endif	/* MY_I2C_H */

