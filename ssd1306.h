#ifndef SSD1306_H
#define	SSD1306_H
#include <xc.h>
#include "my_i2c.h"

//#define OLED_12C_ADDRESS    0x7A // If SA0 = 1
#define OLED_12C_ADDRESS    0x78 // If SA0 = 0
#define OLED_RES            LATBbits.LATB4
#define TRIS_RES            TRISBbits.TRISB4

#define PAGE0         0
#define PAGE1         1
#define PAGE2         2
#define PAGE3         3
#define PAGE4         4
#define PAGE5         5
#define PAGE6         6
#define PAGE7         7
#define FRAME_2       7
#define FRAME_3       4
#define FRAME_4       5
#define FRAME_5       0
#define FRAME_25      6
#define FRAME_64      1
#define FRAME_128     2
#define FRAME_256     3

typedef char                     schar;
typedef unsigned char            uchar;
typedef const char               cschar;
typedef const unsigned char      cuchar;
typedef int                      sint;
typedef unsigned int             uint;

cuchar *font, *font2;
uchar width, height, min, max;

unsigned int arg1, arg2;
unsigned long res;

void Oled_Init(void);
void Oled_Command(uchar cmd);
void Oled_WriteRam(uchar dat);
void Oled_SetPointer(uchar seg, uchar pag);
void Oled_SetFont(cuchar *_font, uchar _width, uchar _height, uchar _min, uchar _max);
void Oled_WriteChar(uchar c, uchar seg, uchar pag);
void Oled_ConstText(cschar *buffer, uchar seg, uchar pag);
void Oled_Text(schar *buffer, uchar seg, uchar pag);
void Oled_FillScreen(uchar pattern, uchar seg, uchar pag);
void Oled_Image(cuchar *buffer);

void Oled_Init(void){
Oled_Command(0xAE);                     // Set Display OFF
Oled_Command(0x81); Oled_Command(0xCF); // Set Contrast Control
Oled_Command(0xA4);                     // Entire Display ON
Oled_Command(0xA6);                     // Set Normal

Oled_Command(0x20); Oled_Command(0x02); // Set Memory Addressing Mode
Oled_Command(0x00);                     // Set Lower Column
Oled_Command(0x10);                     // Set Higher Column
Oled_Command(0xB0);                     // Set Page Start

Oled_Command(0x40);                     // Set Display Start Line
Oled_Command(0xA1);                     // Set Segment Re-map
Oled_Command(0xA8); Oled_Command(0x3F); // Set Multiplex Ratio
Oled_Command(0xC8);                     // Set COM Output
Oled_Command(0xD3); Oled_Command(0x00); // Set Display Offset
Oled_Command(0xDA); Oled_Command(0x12); // Set COM Pins Hardware Configuration

Oled_Command(0xD5); Oled_Command(0x80); // Set Display Clock
Oled_Command(0xD9); Oled_Command(0xF1); // Set Pre-charge Period
Oled_Command(0xDB); Oled_Command(0x40); // Set VCOMH Deselect Level
Oled_Command(0x8D); Oled_Command(0x14); // Charge Pump Setting

Oled_Command(0xAF);                     // Set Display ON
Oled_FillScreen(0x00, 0, 0);            // Clear screen
}


void Oled_Command(uchar cmd){
I2C_Start();
I2C_WriteByte(OLED_12C_ADDRESS);
I2C_WriteByte(0x00);  // Co = 0, D/C = 0
I2C_WriteByte(cmd);
I2C_Stop();
}

void Oled_WriteRam(uchar dat){
I2C_Start();
I2C_WriteByte(OLED_12C_ADDRESS);
I2C_WriteByte(0x40);  // Co = 0, D/C = 1
I2C_WriteByte(dat);
I2C_Stop();
}

void Oled_SetPointer(uchar seg, uchar pag){
uchar low_column, hig_column;
low_column = (seg & 0b00001111);
hig_column = (seg & 0b11110000)>>4;
hig_column = hig_column | 0b00010000;
pag = (pag & 0b00000111);
pag = (pag | 0b10110000);
Oled_Command(low_column); // Set Lower Column
Oled_Command(hig_column); // Set Higher Column
Oled_Command(pag);        // Set Page Start
}

void Oled_SetFont(cuchar *_font, uchar _width, uchar _height, uchar _min, uchar _max){
font2  = _font;
width  = _width;
height = _height / 8;
min    = _min;
max    = _max;
}

void Oled_WriteChar(uchar c, uchar seg, uchar pag){
    uint i,j;
    uchar x_seg, y_pag;
    x_seg = seg;
    y_pag = pag;
    font = font2;
    j = c - min;

    j = j * (width * height);

    for(i = 0; i < j; i++) {
        font++;
    }
    
    for(i = 0; i < width; i++) {
        y_pag = pag;

        for(j = 0; j < height; j++) {
            if(x_seg < 128) {
                   Oled_SetPointer(x_seg, y_pag);
                   Oled_WriteRam(*font);
            }
                y_pag++;
                font++;
        }

        x_seg++;
    }
}

void Oled_ConstText(cschar *buffer, uchar seg, uchar pag){
    uchar x_seg = seg;

    while(*buffer) {
          Oled_WriteChar(*buffer, x_seg, pag);
          x_seg = x_seg + width;
          buffer++;
    }
}

void Oled_Text(schar *buffer, uchar seg, uchar pag){
    uchar x_seg = seg;
    while(*buffer) {
        Oled_WriteChar(*buffer, x_seg, pag);
        x_seg = x_seg + width;
        buffer++;
    }
}

void Oled_FillScreen(uchar pattern, uchar seg, uchar pag)
{
    unsigned char i,j,page;
    page=pag;

    if(seg == 0 && pag == 0){
        for(i = 0; i < 8; i++) {
            Oled_SetPointer(0, i);

            for(j = 0; j < 128; j++) {
                Oled_WriteRam(pattern);
            }
        }
    }
    else {
        for(i=0;i<pag;i++) {
            Oled_SetPointer(seg, i);

            for(j = 0; j < 20; j++) {
                Oled_WriteRam(pattern);
            }
        }
    }
}

void Oled_Image(cuchar *buffer){
    unsigned char i,j;

    for(i = 0; i < 8; i++) {
        Oled_SetPointer(0, i);

        for(j = 0; j < 128; j++) {
            Oled_WriteRam(*buffer);
            buffer++;
        }
    }
}
#endif	/* SSD1306_H */