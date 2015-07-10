#include "p18f45K20.h"
#include <stdio.h>
#include <stdlib.h>

void initBuzzer()
{
    // PWM output setup (CCP2 on RB3)
    // --------------------------------------------------------------------
    CCP2CON = 0b00001111; // CCP2 as PWM mode, LSB's set to 0
    PR2 = 0xff; // Initial Period
    CCPR2L = 0x1F; // Initial duty cycle (MSB's)
    T2CON = 0x00; // Timer 2 prescaler is 1 ->
    T2CONbits.TMR2ON = 1; // Launch Timer 2 ->
    TRISBbits.RB3 = 1;       // Disable RB3 output

    //Timer1 Registers Prescaler= 8 - TMR1 Preset = 0 - Freq = 7.63 Hz - Period = 0.131072 seconds

    T1CONbits.T1CKPS1 = 1;   // bits 5-4  Prescaler Rate Select bits
    T1CONbits.T1CKPS0 = 1;   // bit 4
    T1CONbits.T1OSCEN = 1;   // bit 3 Timer1 Oscillator Enable Control bit 1 = on
    T1CONbits.T1SYNC = 1;    // bit 2 Timer1 External Clock Input Synchronization Control bit...1 = Do not synchronize external clock input
    T1CONbits.TMR1CS = 0;    // bit 1 Timer1 Clock Source Select bit...0 = Internal clock (FOSC/4)
    T1CONbits.TMR1ON = 1;    // bit 0 enables timer
    TMR1H = 133;             // preset for timer1 MSB register
    TMR1L = 163;             // preset for timer1 LSB register

    //1sec

    INTCONbits.PEIE = 1;    // Bit6 Enable Peripheral interrupts
    PIR1bits.TMR1IF = 0;    // Timer1 interrupt Flag cleared

    INTCONbits.GIE  = 1;    // Bit7 enable Global interrupts
}

void Song (void)
{
    INTCONbits.GIE  = 0;    // Bit7 disable Global interrupts

    TRISBbits.RB3 = 0;       // Disable RB3 output
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(3);
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(4);
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(3);
    PR2 = 0xCC; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;

    Delay10KTCYx(7);
    TMR2ON = 1;
    Delay10KTCYx(5);
    TMR2ON = 0;
    Delay10KTCYx(7);
    PR2 = 0xaa; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(7);
    TMR2ON = 1;
    Delay10KTCYx(5);
    TMR2ON = 0;
    Delay10KTCYx(7);
    PR2 = 0x55; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(12);
    TMR2ON = 0;

    Delay10KTCYx(7);
    PR2 = 0xff; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(3);
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(7);

    TMR2ON = 1;
    PR2 = 0xff; // Initial Period
    INTCONbits.GIE  = 1;    // Bit7 enable Global interrupts
}

void song ()
{
    INTCONbits.GIE  = 0;    // Bit7 disable Global interrupts

    TRISBbits.RB3 = 0;       // Disable RB3 output
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(3);
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(4);
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(3);
    PR2 = 0xCC; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;

    Delay10KTCYx(7);
    TMR2ON = 1;
    Delay10KTCYx(5);
    TMR2ON = 0;
    Delay10KTCYx(7);
    PR2 = 0xaa; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(7);
    TMR2ON = 1;
    Delay10KTCYx(5);
    TMR2ON = 0;
    Delay10KTCYx(7);
    PR2 = 0x55; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(8);
    TMR2ON = 0;

    Delay10KTCYx(7);
    PR2 = 0xff; // Initial Period
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(3);
    TMR2ON = 1;
    Delay10KTCYx(2);
    TMR2ON = 0;
    Delay10KTCYx(7);

    TRISBbits.RB3 = 1;      // Disable RB3 output
    PIE1bits.TMR1IE = 0;    // Timer1 interrupt disabled
    TMR2ON = 1;
    PR2 = 0xff; // Initial Period
    INTCONbits.GIE  = 1;    // Bit7 enable Global interrupts
}