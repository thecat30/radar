#ifndef FONT_H
#define	FONT_H
#include <xc.h>
//GLCD FontName : Terminal12x16
//GLCD FontSize : 12 x 16 pixel
const unsigned char Terminal12x16[2304] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (space)
//0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0xFE, 0x67, 0xFE, 0x67, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // !
0x18, 0x30, 0x30, 0x18, 0x60, 0x06, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0xC3, 0xC3, 0xE7, 0xE7, 0x66, 0x66, 0x3C, 0x3C, 0x18, 0x18,//bluetooth
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // "
0x00, 0x00, 0x00, 0x04, 0x20, 0x3C, 0x20, 0x3F, 0xE0, 0x07, 0xFC, 0x04, 0x3C, 0x3C, 0x20, 0x3F, 0xE0, 0x07, 0xFC, 0x04, 0x3C, 0x00, 0x20, 0x00, // #
0x00, 0x00, 0x00, 0x00, 0xF0, 0x08, 0xF8, 0x19, 0x98, 0x19, 0xFE, 0x7F, 0xFE, 0x7F, 0x98, 0x19, 0x98, 0x1F, 0x10, 0x0F, 0x00, 0x00, 0x00, 0x00, // $
0x00, 0x00, 0x00, 0x30, 0x38, 0x38, 0x38, 0x1C, 0x38, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x38, 0x70, 0x38, 0x38, 0x38, 0x00, 0x00, // %
0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xB8, 0x3F, 0xFC, 0x31, 0xC6, 0x21, 0xE2, 0x37, 0x3E, 0x1E, 0x1C, 0x1C, 0x00, 0x36, 0x00, 0x22, 0x00, 0x00, // &
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4E, 0x00, 0x7E, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x07, 0xF8, 0x1F, 0xFC, 0x3F, 0x0E, 0x70, 0x02, 0x40, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // (
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x02, 0x40, 0x0E, 0x70, 0xFC, 0x3F, 0xF8, 0x1F, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // )
0x00, 0x00, 0x00, 0x00, 0x98, 0x0C, 0xB8, 0x0E, 0xE0, 0x03, 0xF8, 0x0F, 0xF8, 0x0F, 0xE0, 0x03, 0xB8, 0x0E, 0x98, 0x0C, 0x00, 0x00, 0x00, 0x00, // *
0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0xF0, 0x0F, 0xF0, 0x0F, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, // +
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x7C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ,
0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, // -
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .
0x00, 0x00, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x00, 0x00, // /
0x00, 0x00, 0xF0, 0x0F, 0xFC, 0x3F, 0x0C, 0x3C, 0x06, 0x66, 0x06, 0x63, 0x86, 0x61, 0xC6, 0x60, 0x66, 0x60, 0x3C, 0x30, 0xFC, 0x3F, 0xF0, 0x0F, // 0
0x00, 0x00, 0x00, 0x00, 0x18, 0x60, 0x18, 0x60, 0x1C, 0x60, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, // 1
0x00, 0x00, 0x38, 0x60, 0x3C, 0x70, 0x0E, 0x78, 0x06, 0x7C, 0x06, 0x6E, 0x06, 0x67, 0x86, 0x63, 0xC6, 0x61, 0xEE, 0x60, 0x7C, 0x60, 0x38, 0x60, // 2
0x00, 0x00, 0x18, 0x18, 0x1C, 0x38, 0x0E, 0x70, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0xCE, 0x73, 0xFC, 0x3E, 0x78, 0x1C, // 3
0x00, 0x00, 0x80, 0x07, 0xC0, 0x07, 0xE0, 0x06, 0x70, 0x06, 0x38, 0x06, 0x1C, 0x06, 0x0E, 0x06, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x06, 0x00, 0x06, // 4
0x00, 0x00, 0x7E, 0x18, 0xFE, 0x38, 0xC6, 0x70, 0xC6, 0x60, 0xC6, 0x60, 0xC6, 0x60, 0xC6, 0x60, 0xC6, 0x60, 0xC6, 0x71, 0x86, 0x3F, 0x06, 0x1F, // 5
0x00, 0x00, 0x80, 0x1F, 0xE0, 0x3F, 0xF0, 0x73, 0xB8, 0x61, 0x9C, 0x61, 0x8E, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x73, 0x00, 0x3F, 0x00, 0x1E, // 6
0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x60, 0x06, 0x78, 0x06, 0x1E, 0x86, 0x07, 0xE6, 0x01, 0x7E, 0x00, 0x1E, 0x00, 0x06, 0x00, // 7
0x00, 0x00, 0x00, 0x1E, 0x78, 0x3F, 0xFC, 0x73, 0xCE, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0xCE, 0x61, 0xFC, 0x73, 0x78, 0x3F, 0x00, 0x1E, // C8
0x00, 0x00, 0x78, 0x00, 0xFC, 0x00, 0xCE, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x71, 0x86, 0x39, 0x86, 0x1D, 0xCE, 0x0F, 0xFC, 0x07, 0xF8, 0x01, // 9
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x1C, 0x70, 0x1C, 0x70, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // :
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x4E, 0x38, 0x7E, 0x38, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;
0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xC0, 0x03, 0xE0, 0x07, 0x70, 0x0E, 0x38, 0x1C, 0x1C, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, // <
0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x00, 0x00, // =
0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x0E, 0x70, 0x1C, 0x38, 0x38, 0x1C, 0x70, 0x0E, 0xE0, 0x07, 0xC0, 0x03, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, // >
0x00, 0x00, 0x38, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x06, 0x00, 0x06, 0x6F, 0x86, 0x6F, 0xC6, 0x01, 0xEE, 0x00, 0x7C, 0x00, 0x38, 0x00, 0x00, 0x00, // ?
0x00, 0x00, 0xF0, 0x1F, 0xFC, 0x3F, 0x0E, 0x30, 0xE6, 0x67, 0xF6, 0x6F, 0x36, 0x6C, 0xF6, 0x6F, 0xF6, 0x6F, 0x0E, 0x6C, 0xFC, 0x07, 0xF0, 0x03, // @
0x00, 0x00, 0x00, 0x70, 0x00, 0x7E, 0xC0, 0x0F, 0xF8, 0x0D, 0x3E, 0x0C, 0x3E, 0x0C, 0xF8, 0x0D, 0xC0, 0x0F, 0x00, 0x7E, 0x00, 0x70, 0x00, 0x00, // A
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0xCE, 0x61, 0xFC, 0x73, 0x78, 0x3F, 0x00, 0x1E, 0x00, 0x00, // B
0x00, 0x00, 0xE0, 0x07, 0xF8, 0x1F, 0x1C, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x0E, 0x70, 0x1C, 0x38, 0x18, 0x18, 0x00, 0x00, // C
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x0E, 0x70, 0x1C, 0x38, 0xF8, 0x1F, 0xE0, 0x07, 0x00, 0x00, // D
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, // E
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x86, 0x01, 0x86, 0x01, 0x86, 0x01, 0x86, 0x01, 0x86, 0x01, 0x86, 0x01, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, // F
0x00, 0x00, 0xE0, 0x07, 0xF8, 0x1F, 0x1C, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x8E, 0x7F, 0x8C, 0x7F, 0x00, 0x00, // G
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x00, // H
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0xFE, 0x7F, 0xFE, 0x7F, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // I
0x00, 0x00, 0x00, 0x1C, 0x00, 0x3C, 0x00, 0x70, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x70, 0xFE, 0x3F, 0xFE, 0x0F, 0x00, 0x00, // J
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x80, 0x01, 0xC0, 0x03, 0xE0, 0x07, 0x70, 0x0E, 0x38, 0x1C, 0x1C, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x00, 0x00, // K
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, // L
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x3C, 0x00, 0xF0, 0x00, 0xC0, 0x03, 0xC0, 0x03, 0xF0, 0x00, 0x3C, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x00, // M
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x1C, 0x00, 0x70, 0x00, 0xE0, 0x01, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x38, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x00, // N
0x00, 0x00, 0xE0, 0x07, 0xF8, 0x1F, 0x1C, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x06, 0x60, 0x0E, 0x70, 0x1C, 0x38, 0xF8, 0x1F, 0xE0, 0x07, 0x00, 0x00, // O
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x06, 0x03, 0x06, 0x03, 0x06, 0x03, 0x06, 0x03, 0x06, 0x03, 0x8E, 0x03, 0xFC, 0x01, 0xF8, 0x00, 0x00, 0x00, // P
0x00, 0x00, 0xE0, 0x07, 0xF8, 0x1F, 0x1C, 0x38, 0x0E, 0x70, 0x06, 0x60, 0x06, 0x6C, 0x0E, 0x7C, 0x1C, 0x38, 0xF8, 0x7F, 0xE0, 0x67, 0x00, 0x00, // Q
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x06, 0x03, 0x06, 0x03, 0x06, 0x07, 0x06, 0x0F, 0x06, 0x1F, 0x8E, 0x3B, 0xFC, 0x71, 0xF8, 0x60, 0x00, 0x00, // R
0x00, 0x00, 0x78, 0x18, 0xFC, 0x38, 0xCE, 0x71, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x86, 0x61, 0x8E, 0x73, 0x1C, 0x3F, 0x18, 0x1E, 0x00, 0x00, // S
0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x06, 0x00, 0x06, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, // T
0x00, 0x00, 0xFE, 0x0F, 0xFE, 0x3F, 0x00, 0x70, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x70, 0xFE, 0x3F, 0xFE, 0x0F, 0x00, 0x00, // U
0x00, 0x00, 0x0E, 0x00, 0x7E, 0x00, 0xF0, 0x03, 0x80, 0x1F, 0x00, 0x7C, 0x00, 0x7C, 0x80, 0x1F, 0xF0, 0x03, 0x7E, 0x00, 0x0E, 0x00, 0x00, 0x00, // V
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x38, 0x00, 0x0C, 0x00, 0x07, 0x00, 0x07, 0x00, 0x0C, 0x00, 0x38, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x00, // W
0x00, 0x00, 0x06, 0x60, 0x1E, 0x78, 0x38, 0x1C, 0x60, 0x06, 0xC0, 0x03, 0xC0, 0x03, 0x60, 0x06, 0x38, 0x1C, 0x1E, 0x78, 0x06, 0x60, 0x00, 0x00, // X
0x00, 0x00, 0x06, 0x00, 0x1E, 0x00, 0x78, 0x00, 0xE0, 0x01, 0x80, 0x7F, 0x80, 0x7F, 0xE0, 0x01, 0x78, 0x00, 0x1E, 0x00, 0x06, 0x00, 0x00, 0x00, // Y
0x00, 0x00, 0x06, 0x60, 0x06, 0x78, 0x06, 0x7C, 0x06, 0x66, 0x86, 0x63, 0xC6, 0x61, 0x66, 0x60, 0x3E, 0x60, 0x1E, 0x60, 0x06, 0x60, 0x00, 0x00, // Z
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // [
0x00, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x01, 0x80, 0x03, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x00, // BackSlash
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //
0x00, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x00, //
0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, // _
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // `
0x00, 0x00, 0x00, 0x1C, 0x40, 0x3E, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0xE0, 0x3F, 0xC0, 0x3F, 0x00, 0x00, // a
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x80, 0x61, 0xC0, 0x60, 0xC0, 0x60, 0xC0, 0x60, 0xC0, 0x60, 0xC0, 0x71, 0x80, 0x3F, 0x00, 0x1F, 0x00, 0x00, // b
0x00, 0x00, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xC0, 0x18, 0x80, 0x08, 0x00, 0x00, // c
0x00, 0x00, 0x00, 0x1F, 0x80, 0x3F, 0xC0, 0x71, 0xC0, 0x60, 0xC0, 0x60, 0xC0, 0x60, 0xC0, 0x61, 0x80, 0x61, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x00, // d
0x00, 0x00, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x3B, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0xC0, 0x13, 0x80, 0x01, 0x00, 0x00, // e
0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0xF8, 0x7F, 0xFC, 0x7F, 0x8E, 0x01, 0x86, 0x01, 0x86, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, // f
0x00, 0x00, 0xC0, 0x01, 0xE0, 0x63, 0x70, 0x67, 0x30, 0x66, 0x30, 0x66, 0x30, 0x66, 0x30, 0x66, 0x30, 0x73, 0xF0, 0x3F, 0xF0, 0x1F, 0x00, 0x00, // g
0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x80, 0x01, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x01, 0x80, 0x7F, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, // h
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x60, 0x30, 0xEC, 0x3F, 0xEC, 0x3F, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // i
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x70, 0x00, 0x60, 0x30, 0x60, 0xF6, 0x7F, 0xF6, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // j
0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x06, 0x00, 0x0F, 0x80, 0x1F, 0xC0, 0x39, 0xC0, 0x70, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, // k
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x60, 0xFE, 0x7F, 0xFE, 0x7F, 0x00, 0x60, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // l
0x00, 0x00, 0xE0, 0x3F, 0xC0, 0x3F, 0xE0, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0xC0, 0x3F, 0xE0, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0x80, 0x3F, 0x00, 0x00, // m
0x00, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0xE0, 0x3F, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0x80, 0x3F, 0x00, 0x00, // n
0x00, 0x00, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xE0, 0x38, 0xC0, 0x1F, 0x80, 0x0F, 0x00, 0x00, // o
0x00, 0x00, 0xF0, 0x7F, 0xF0, 0x7F, 0x30, 0x06, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x70, 0x0E, 0xE0, 0x07, 0xC0, 0x03, 0x00, 0x00, // p
0x00, 0x00, 0xC0, 0x03, 0xE0, 0x07, 0x70, 0x0E, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x30, 0x06, 0xF0, 0x7F, 0xF0, 0x7F, 0x00, 0x00, // q
0x00, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0x00, 0x00, // r
0x00, 0x00, 0x00, 0x00, 0xC0, 0x11, 0xE0, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x3F, 0x40, 0x1E, 0x00, 0x00, 0x00, 0x00, // s
0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x60, 0x00, 0xFE, 0x1F, 0xFE, 0x3F, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, // t
0x00, 0x00, 0xE0, 0x0F, 0xE0, 0x1F, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x18, 0xE0, 0x3F, 0xE0, 0x3F, 0x00, 0x00, // u
0x00, 0x00, 0x60, 0x00, 0xE0, 0x01, 0x80, 0x07, 0x00, 0x1E, 0x00, 0x38, 0x00, 0x38, 0x00, 0x1E, 0x80, 0x07, 0xE0, 0x01, 0x60, 0x00, 0x00, 0x00, // v
0x00, 0x00, 0xE0, 0x07, 0xE0, 0x1F, 0x00, 0x38, 0x00, 0x1C, 0xE0, 0x0F, 0xE0, 0x0F, 0x00, 0x1C, 0x00, 0x38, 0xE0, 0x1F, 0xE0, 0x07, 0x00, 0x00, // w
0x00, 0x00, 0x60, 0x30, 0xE0, 0x38, 0xC0, 0x1D, 0x80, 0x0F, 0x00, 0x07, 0x80, 0x0F, 0xC0, 0x1D, 0xE0, 0x38, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, // x
0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0xF0, 0x40, 0xC0, 0x73, 0x00, 0x3F, 0x00, 0x0F, 0xC0, 0x03, 0xF0, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // y
0x00, 0x00, 0x60, 0x30, 0x60, 0x38, 0x60, 0x3C, 0x60, 0x36, 0x60, 0x33, 0xE0, 0x31, 0xE0, 0x30, 0x60, 0x30, 0x20, 0x30, 0x00, 0x00, 0x00, 0x00, // z
0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xC0, 0x01, 0xFC, 0x1F, 0x7E, 0x3F, 0x07, 0x70, 0x03, 0x60, 0x03, 0x60, 0x03, 0x60, 0x00, 0x00, 0x00, 0x00, // {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0x7E, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // |
0x00, 0x00, 0x00, 0x00, 0x03, 0x60, 0x03, 0x60, 0x03, 0x60, 0x07, 0x70, 0x7E, 0x3F, 0xFC, 0x1F, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, // }
0x00, 0x00, 0x10, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x10, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x00, 0x00, // ->
0x00, 0x00, 0x00, 0x0F, 0x80, 0x0F, 0xC0, 0x0C, 0x60, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x60, 0x0C, 0xC0, 0x0C, 0x80, 0x0F, 0x00, 0x0F, 0x00, 0x00  // <-
};

//GLCD FontName : Segment_7
//GLCD FontSize : 25 x 40 pixel
const unsigned char Segment_25x40[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char .
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char /
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xC4, 0xFF, 0xC1, 0xFF, 0x11, 0x8C, 0xFF, 0x80, 0xFF, 0x18, 0x1C, 0x7F, 0x00, 0x7F, 0x1C, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x1C, 0x7F, 0x00, 0x7F, 0x1C, 0x8C, 0xFF, 0x80, 0xFF, 0x18, 0xC4, 0xFF, 0xC1, 0xFF, 0x11, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 0
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xC0, 0xFF, 0xC1, 0xFF, 0x01, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0xE0, 0xFF, 0x03, 0x04, 0x00, 0xC0, 0xFF, 0x11, 0x0C, 0x00, 0x88, 0xFF, 0x18, 0x1C, 0x00, 0x1C, 0x7F, 0x1C, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x1C, 0x7F, 0x1C, 0x00, 0x1C, 0x8C, 0xFF, 0x08, 0x00, 0x18, 0xC4, 0xFF, 0x01, 0x00, 0x10, 0xE0, 0xFF, 0x03, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 2
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x00, 0x08, 0x00, 0x18, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x1C, 0x7F, 0x1C, 0x7F, 0x1C, 0x8C, 0xFF, 0x88, 0xFF, 0x18, 0xC4, 0xFF, 0xC1, 0xFF, 0x11, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 3
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0xE0, 0xFF, 0x03, 0x00, 0x00, 0xC0, 0xFF, 0x01, 0x00, 0x00, 0x80, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x7F, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x7F, 0x1C, 0x7F, 0x00, 0x80, 0xFF, 0x88, 0xFF, 0x00, 0xC0, 0xFF, 0xC1, 0xFF, 0x01, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 4
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0xE0, 0xFF, 0x03, 0x00, 0x00, 0xC4, 0xFF, 0x01, 0x00, 0x10, 0x8C, 0xFF, 0x08, 0x00, 0x18, 0x1C, 0x7F, 0x1C, 0x00, 0x1C, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x1C, 0x00, 0x1C, 0x7F, 0x1C, 0x0C, 0x00, 0x88, 0xFF, 0x18, 0x04, 0x00, 0xC0, 0xFF, 0x11, 0x00, 0x00, 0xE0, 0xFF, 0x03, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 5
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xC0, 0xFF, 0xC1, 0xFF, 0x11, 0x80, 0xFF, 0x88, 0xFF, 0x18, 0x00, 0x7F, 0x1C, 0x7F, 0x1C, 0x00, 0x00, 0x3E, 0x00, 0x1E, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x00, 0x3E, 0x00, 0x1E, 0x00, 0x00, 0x1C, 0x7F, 0x1C, 0x00, 0x00, 0x88, 0xFF, 0x18, 0x00, 0x00, 0xC0, 0xFF, 0x11, 0x00, 0x00, 0xE0, 0xFF, 0x03, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 6
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x7F, 0x00, 0x7F, 0x00, 0x8C, 0xFF, 0x80, 0xFF, 0x00, 0xC4, 0xFF, 0xC1, 0xFF, 0x01, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 7
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xC4, 0xFF, 0xC1, 0xFF, 0x11, 0x8C, 0xFF, 0x88, 0xFF, 0x18, 0x1C, 0x7F, 0x1C, 0x7F, 0x1C, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x7C, 0x00, 0x3E, 0x00, 0x1F, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x1C, 0x7F, 0x1C, 0x7F, 0x1C, 0x8C, 0xFF, 0x88, 0xFF, 0x18, 0xC4, 0xFF, 0xC1, 0xFF, 0x11, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 8
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x07, 0x00, 0x00, 0xE0, 0xFF, 0x03, 0x00, 0x00, 0xC4, 0xFF, 0x01, 0x00, 0x00, 0x8C, 0xFF, 0x08, 0x00, 0x00, 0x1C, 0x7F, 0x1C, 0x00, 0x00, 0x3C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x00, 0x3C, 0x00, 0x3E, 0x00, 0x00, 0x1C, 0x7F, 0x1C, 0x7F, 0x00, 0x8C, 0xFF, 0x88, 0xFF, 0x00, 0xC4, 0xFF, 0xC1, 0xFF, 0x01, 0xE0, 0xFF, 0xE3, 0xFF, 0x03, 0xF0, 0xFF, 0xF7, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 9
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x00, 0x00, 0x00, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x1F, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00   // Code for char :
};
#endif	/* FONT_H */

