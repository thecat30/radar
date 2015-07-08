#include "sonar.h"

void initSonar()
{
    ADCON0 = 0b00000100;
    ADCON1 = 0b00001110;
    ADCON2 = 0b10111010;
    ADCON0bits.ADON = 1;
    ADCON0bits.GO_NOT_DONE = 1;
}

unsigned int getData()
{
    while (ADCON0bits.GO_NOT_DONE == 1);

    arg1 = (unsigned int)ADRESH << 8;
    arg1 += ADRESL;
    arg2 = 325;
    MULT16();

    ADCON0bits.GO_NOT_DONE = 1;

    return res >> 8;
}
unsigned int getFilteredData()
{
    unsigned int distance = getData();
    unsigned int previousDistance = distance;
    unsigned int a = 10;

    for (int i = 0; i < 64; ++i) {
        previousDistance = distance;
        arg1 = getData();
        arg2 = a;
        MULT16();

        distance = res;
        arg1 = previousDistance;
        arg2 = 255 - a;
        MULT16();

        distance += res;
        distance = distance >> 8;
    }

    return distance;
}