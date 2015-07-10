#ifndef MY_I2C_H
#define	MY_I2C_H
#include <xc.h>

#define I2C1_SCL	TRISCbits.TRISC3
#define I2C1_SDA	TRISCbits.TRISC4

void I2C_Init(unsigned char clock_output);
void I2C_Start();
void I2C_Stop();
void I2C_Close();
unsigned char I2C_WriteByte(unsigned char data_out);

void I2C_Init(unsigned char clock_output)
{
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

void I2C_Start()
{
    SSPCON2bits.SEN = 1;
    while(SSPCON2bits.SEN);
}

void I2C_Stop()
{
    SSPCON2bits.PEN = 1;
    while(SSPCON2bits.PEN);
}

void I2C_Close()
{
    SSPCON1 &= 0xDF;
}

unsigned char I2C_WriteByte(unsigned char data_out)
{
    SSPBUF = data_out;        // write single byte to SSP1BUF
    while(SSPSTATbits.BF);       //wait until write cycle is complete
}
#endif	/* MY_I2C_H */