#include "bargraph.h"

void initBargraph()
{
    TRISD = 0x00;
}

void setBargraph(unsigned int distance)
{
    LATD = 0;

    if (distance < 100) {
        LATD0 = 1;
        
        if (distance < 80) {
            LATD1 = 1;
            
            if (distance < 70) {
                LATD2 = 1;
                
                if (distance < 60) {
                    LATD3 = 1;
                    
                    if (distance < 50) {
                        LATD4 = 1;
                        
                        if (distance < 40) {
                            LATD5 = 1;
                           
                            if (distance < 30) {
                                LATD6 = 1;
                                
                                if (distance < 20) {
                                    LATD7 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}