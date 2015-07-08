/* 
 * File:   sonar.h
 * Author: N.Desvignes
 *
 * Created on 8 juillet 2015, 07:53
 */

#ifndef SONAR_H
#define	SONAR_H

#include <pic18f45k20.h>

unsigned int arg1, arg2;
unsigned long res;

extern void MULT16(void);

void initSonar();
unsigned int getData();
unsigned int getFilteredData();

#endif	/* SONAR_H */

