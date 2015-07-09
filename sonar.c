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
    unsigned int previousDistance;
    unsigned int a = 5;

    for (int i = 0; i < 64; ++i) {
        previousDistance = distance;
        arg1 = getData();
        arg2 = a;
        MULT16();

        distance = res;
        arg1 = previousDistance;
        arg2 = 127 - a;
        MULT16();

        distance += res;
        distance = distance >> 7;
    }

    return distance;
}

char* getChar(unsigned int value)
{
    char text[4] = {'0', '0', '0', '\0'};

    text[0] += value / 100;
    text[1] += (value - ((text[0] - '0') * 100)) / 10;
    text[2] += value % 10;

    return text;
}