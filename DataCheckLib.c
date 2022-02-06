/*******************************************************************
** Project Name : ---                                             **
********************************************************************
** File Name    :    DataCheckLib.c                               **
**                                                                **
** Version      :    V1.00                                        **
**                                                                **
** Created By   :  	 WilliamChen                                  **
**                                                                **
** Create Date  :    2022-01-28                                   **
**                                                                **
********************************************************************
** This file is licensed under the MIT License as stated below
**
**
** License
** -------
**
** Copyright (c) 2022-2032 William Chen
**
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in all
** copies or substantial portions of the Software.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
**
********************************************************************
** Description  : this file is used with DataCheckLib.h. these
files include 21 parametric models of CRC-check and Commonly used
sum-check, and CRC-check can choose a way of straightforward CRC
implementation or table-driven implementation by macro-define in
DataCheckLib.h.
*******************************************************************/
#include "DataCheckLib.h"

#if (__CRC_4_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_4_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc4Table_Reflect_True_Poly_0x03[256] =
{
  0x00, 0x07, 0x0e, 0x09, 0x05, 0x02, 0x0b, 0x0c, //0 ~ 7	    
  0x0a, 0x0d, 0x04, 0x03, 0x0f, 0x08, 0x01, 0x06, //8 ~ 15	  
  0x0d, 0x0a, 0x03, 0x04, 0x08, 0x0f, 0x06, 0x01, //16 ~ 23	
  0x07, 0x00, 0x09, 0x0e, 0x02, 0x05, 0x0c, 0x0b, //24 ~ 31  
  0x03, 0x04, 0x0d, 0x0a, 0x06, 0x01, 0x08, 0x0f, //32 ~ 39  
  0x09, 0x0e, 0x07, 0x00, 0x0c, 0x0b, 0x02, 0x05, //40 ~ 47  
  0x0e, 0x09, 0x00, 0x07, 0x0b, 0x0c, 0x05, 0x02, //48 ~ 55  
  0x04, 0x03, 0x0a, 0x0d, 0x01, 0x06, 0x0f, 0x08, //56 ~ 63  
  0x06, 0x01, 0x08, 0x0f, 0x03, 0x04, 0x0d, 0x0a, //64 ~ 71  
  0x0c, 0x0b, 0x02, 0x05, 0x09, 0x0e, 0x07, 0x00, //72 ~ 79  
  0x0b, 0x0c, 0x05, 0x02, 0x0e, 0x09, 0x00, 0x07, //80 ~ 87  
  0x01, 0x06, 0x0f, 0x08, 0x04, 0x03, 0x0a, 0x0d, //88 ~ 95  
  0x05, 0x02, 0x0b, 0x0c, 0x00, 0x07, 0x0e, 0x09, //96 ~ 103 
  0x0f, 0x08, 0x01, 0x06, 0x0a, 0x0d, 0x04, 0x03, //104 ~ 111
  0x08, 0x0f, 0x06, 0x01, 0x0d, 0x0a, 0x03, 0x04, //112 ~ 119
  0x02, 0x05, 0x0c, 0x0b, 0x07, 0x00, 0x09, 0x0e, //120 ~ 127
  0x0c, 0x0b, 0x02, 0x05, 0x09, 0x0e, 0x07, 0x00, //128 ~ 135
  0x06, 0x01, 0x08, 0x0f, 0x03, 0x04, 0x0d, 0x0a, //136 ~ 143
  0x01, 0x06, 0x0f, 0x08, 0x04, 0x03, 0x0a, 0x0d, //144 ~ 151
  0x0b, 0x0c, 0x05, 0x02, 0x0e, 0x09, 0x00, 0x07, //152 ~ 159
  0x0f, 0x08, 0x01, 0x06, 0x0a, 0x0d, 0x04, 0x03, //160 ~ 167
  0x05, 0x02, 0x0b, 0x0c, 0x00, 0x07, 0x0e, 0x09, //168 ~ 175
  0x02, 0x05, 0x0c, 0x0b, 0x07, 0x00, 0x09, 0x0e, //176 ~ 183
  0x08, 0x0f, 0x06, 0x01, 0x0d, 0x0a, 0x03, 0x04, //184 ~ 191
  0x0a, 0x0d, 0x04, 0x03, 0x0f, 0x08, 0x01, 0x06, //192 ~ 199
  0x00, 0x07, 0x0e, 0x09, 0x05, 0x02, 0x0b, 0x0c, //200 ~ 207
  0x07, 0x00, 0x09, 0x0e, 0x02, 0x05, 0x0c, 0x0b, //208 ~ 215
  0x0d, 0x0a, 0x03, 0x04, 0x08, 0x0f, 0x06, 0x01, //216 ~ 223
  0x09, 0x0e, 0x07, 0x00, 0x0c, 0x0b, 0x02, 0x05, //224 ~ 231
  0x03, 0x04, 0x0d, 0x0a, 0x06, 0x01, 0x08, 0x0f, //232 ~ 239
  0x04, 0x03, 0x0a, 0x0d, 0x01, 0x06, 0x0f, 0x08, //240 ~ 247
  0x0e, 0x09, 0x00, 0x07, 0x0b, 0x0c, 0x05, 0x02  //248 ~ 255
};
#endif

#if (__CRC_5_EPC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_EPC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc5Table_Reflect_False_Poly_0x09[256] =
{
  0x00, 0x48, 0x90, 0xd8, 0x68, 0x20, 0xf8, 0xb0, //0 ~ 7	    
  0xd0, 0x98, 0x40, 0x08, 0xb8, 0xf0, 0x28, 0x60, //8 ~ 15	  
  0xe8, 0xa0, 0x78, 0x30, 0x80, 0xc8, 0x10, 0x58, //16 ~ 23	
  0x38, 0x70, 0xa8, 0xe0, 0x50, 0x18, 0xc0, 0x88, //24 ~ 31  
  0x98, 0xd0, 0x08, 0x40, 0xf0, 0xb8, 0x60, 0x28, //32 ~ 39  
  0x48, 0x00, 0xd8, 0x90, 0x20, 0x68, 0xb0, 0xf8, //40 ~ 47  
  0x70, 0x38, 0xe0, 0xa8, 0x18, 0x50, 0x88, 0xc0, //48 ~ 55  
  0xa0, 0xe8, 0x30, 0x78, 0xc8, 0x80, 0x58, 0x10, //56 ~ 63  
  0x78, 0x30, 0xe8, 0xa0, 0x10, 0x58, 0x80, 0xc8, //64 ~ 71  
  0xa8, 0xe0, 0x38, 0x70, 0xc0, 0x88, 0x50, 0x18, //72 ~ 79  
  0x90, 0xd8, 0x00, 0x48, 0xf8, 0xb0, 0x68, 0x20, //80 ~ 87  
  0x40, 0x08, 0xd0, 0x98, 0x28, 0x60, 0xb8, 0xf0, //88 ~ 95  
  0xe0, 0xa8, 0x70, 0x38, 0x88, 0xc0, 0x18, 0x50, //96 ~ 103 
  0x30, 0x78, 0xa0, 0xe8, 0x58, 0x10, 0xc8, 0x80, //104 ~ 111
  0x08, 0x40, 0x98, 0xd0, 0x60, 0x28, 0xf0, 0xb8, //112 ~ 119
  0xd8, 0x90, 0x48, 0x00, 0xb0, 0xf8, 0x20, 0x68, //120 ~ 127
  0xf0, 0xb8, 0x60, 0x28, 0x98, 0xd0, 0x08, 0x40, //128 ~ 135
  0x20, 0x68, 0xb0, 0xf8, 0x48, 0x00, 0xd8, 0x90, //136 ~ 143
  0x18, 0x50, 0x88, 0xc0, 0x70, 0x38, 0xe0, 0xa8, //144 ~ 151
  0xc8, 0x80, 0x58, 0x10, 0xa0, 0xe8, 0x30, 0x78, //152 ~ 159
  0x68, 0x20, 0xf8, 0xb0, 0x00, 0x48, 0x90, 0xd8, //160 ~ 167
  0xb8, 0xf0, 0x28, 0x60, 0xd0, 0x98, 0x40, 0x08, //168 ~ 175
  0x80, 0xc8, 0x10, 0x58, 0xe8, 0xa0, 0x78, 0x30, //176 ~ 183
  0x50, 0x18, 0xc0, 0x88, 0x38, 0x70, 0xa8, 0xe0, //184 ~ 191
  0x88, 0xc0, 0x18, 0x50, 0xe0, 0xa8, 0x70, 0x38, //192 ~ 199
  0x58, 0x10, 0xc8, 0x80, 0x30, 0x78, 0xa0, 0xe8, //200 ~ 207
  0x60, 0x28, 0xf0, 0xb8, 0x08, 0x40, 0x98, 0xd0, //208 ~ 215
  0xb0, 0xf8, 0x20, 0x68, 0xd8, 0x90, 0x48, 0x00, //216 ~ 223
  0x10, 0x58, 0x80, 0xc8, 0x78, 0x30, 0xe8, 0xa0, //224 ~ 231
  0xc0, 0x88, 0x50, 0x18, 0xa8, 0xe0, 0x38, 0x70, //232 ~ 239
  0xf8, 0xb0, 0x68, 0x20, 0x90, 0xd8, 0x00, 0x48, //240 ~ 247
  0x28, 0x60, 0xb8, 0xf0, 0x40, 0x08, 0xd0, 0x98 //248 ~ 255
};
#endif

#if (__CRC_5_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc5Table_Reflect_True_Poly_0x15[256] =
{
  0x00, 0x07, 0x0e, 0x09, 0x1c, 0x1b, 0x12, 0x15, //0 ~ 7	    
  0x13, 0x14, 0x1d, 0x1a, 0x0f, 0x08, 0x01, 0x06, //8 ~ 15	  
  0x0d, 0x0a, 0x03, 0x04, 0x11, 0x16, 0x1f, 0x18, //16 ~ 23	
  0x1e, 0x19, 0x10, 0x17, 0x02, 0x05, 0x0c, 0x0b, //24 ~ 31  
  0x1a, 0x1d, 0x14, 0x13, 0x06, 0x01, 0x08, 0x0f, //32 ~ 39  
  0x09, 0x0e, 0x07, 0x00, 0x15, 0x12, 0x1b, 0x1c, //40 ~ 47  
  0x17, 0x10, 0x19, 0x1e, 0x0b, 0x0c, 0x05, 0x02, //48 ~ 55  
  0x04, 0x03, 0x0a, 0x0d, 0x18, 0x1f, 0x16, 0x11, //56 ~ 63  
  0x1f, 0x18, 0x11, 0x16, 0x03, 0x04, 0x0d, 0x0a, //64 ~ 71  
  0x0c, 0x0b, 0x02, 0x05, 0x10, 0x17, 0x1e, 0x19, //72 ~ 79  
  0x12, 0x15, 0x1c, 0x1b, 0x0e, 0x09, 0x00, 0x07, //80 ~ 87  
  0x01, 0x06, 0x0f, 0x08, 0x1d, 0x1a, 0x13, 0x14, //88 ~ 95  
  0x05, 0x02, 0x0b, 0x0c, 0x19, 0x1e, 0x17, 0x10, //96 ~ 103 
  0x16, 0x11, 0x18, 0x1f, 0x0a, 0x0d, 0x04, 0x03, //104 ~ 111
  0x08, 0x0f, 0x06, 0x01, 0x14, 0x13, 0x1a, 0x1d, //112 ~ 119
  0x1b, 0x1c, 0x15, 0x12, 0x07, 0x00, 0x09, 0x0e, //120 ~ 127
  0x15, 0x12, 0x1b, 0x1c, 0x09, 0x0e, 0x07, 0x00, //128 ~ 135
  0x06, 0x01, 0x08, 0x0f, 0x1a, 0x1d, 0x14, 0x13, //136 ~ 143
  0x18, 0x1f, 0x16, 0x11, 0x04, 0x03, 0x0a, 0x0d, //144 ~ 151
  0x0b, 0x0c, 0x05, 0x02, 0x17, 0x10, 0x19, 0x1e, //152 ~ 159
  0x0f, 0x08, 0x01, 0x06, 0x13, 0x14, 0x1d, 0x1a, //160 ~ 167
  0x1c, 0x1b, 0x12, 0x15, 0x00, 0x07, 0x0e, 0x09, //168 ~ 175
  0x02, 0x05, 0x0c, 0x0b, 0x1e, 0x19, 0x10, 0x17, //176 ~ 183
  0x11, 0x16, 0x1f, 0x18, 0x0d, 0x0a, 0x03, 0x04, //184 ~ 191
  0x0a, 0x0d, 0x04, 0x03, 0x16, 0x11, 0x18, 0x1f, //192 ~ 199
  0x19, 0x1e, 0x17, 0x10, 0x05, 0x02, 0x0b, 0x0c, //200 ~ 207
  0x07, 0x00, 0x09, 0x0e, 0x1b, 0x1c, 0x15, 0x12, //208 ~ 215
  0x14, 0x13, 0x1a, 0x1d, 0x08, 0x0f, 0x06, 0x01, //216 ~ 223
  0x10, 0x17, 0x1e, 0x19, 0x0c, 0x0b, 0x02, 0x05, //224 ~ 231
  0x03, 0x04, 0x0d, 0x0a, 0x1f, 0x18, 0x11, 0x16, //232 ~ 239
  0x1d, 0x1a, 0x13, 0x14, 0x01, 0x06, 0x0f, 0x08, //240 ~ 247
  0x0e, 0x09, 0x00, 0x07, 0x12, 0x15, 0x1c, 0x1b  //248 ~ 255
};
#endif

#if (__CRC_5_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_USB_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc5Table_Reflect_True_Poly_0x05[256] =
{
  0x00, 0x0e, 0x1c, 0x12, 0x11, 0x1f, 0x0d, 0x03, //0 ~ 7	    
  0x0b, 0x05, 0x17, 0x19, 0x1a, 0x14, 0x06, 0x08, //8 ~ 15	  
  0x16, 0x18, 0x0a, 0x04, 0x07, 0x09, 0x1b, 0x15, //16 ~ 23	
  0x1d, 0x13, 0x01, 0x0f, 0x0c, 0x02, 0x10, 0x1e, //24 ~ 31  
  0x05, 0x0b, 0x19, 0x17, 0x14, 0x1a, 0x08, 0x06, //32 ~ 39  
  0x0e, 0x00, 0x12, 0x1c, 0x1f, 0x11, 0x03, 0x0d, //40 ~ 47  
  0x13, 0x1d, 0x0f, 0x01, 0x02, 0x0c, 0x1e, 0x10, //48 ~ 55  
  0x18, 0x16, 0x04, 0x0a, 0x09, 0x07, 0x15, 0x1b, //56 ~ 63  
  0x0a, 0x04, 0x16, 0x18, 0x1b, 0x15, 0x07, 0x09, //64 ~ 71  
  0x01, 0x0f, 0x1d, 0x13, 0x10, 0x1e, 0x0c, 0x02, //72 ~ 79  
  0x1c, 0x12, 0x00, 0x0e, 0x0d, 0x03, 0x11, 0x1f, //80 ~ 87  
  0x17, 0x19, 0x0b, 0x05, 0x06, 0x08, 0x1a, 0x14, //88 ~ 95  
  0x0f, 0x01, 0x13, 0x1d, 0x1e, 0x10, 0x02, 0x0c, //96 ~ 103 
  0x04, 0x0a, 0x18, 0x16, 0x15, 0x1b, 0x09, 0x07, //104 ~ 111
  0x19, 0x17, 0x05, 0x0b, 0x08, 0x06, 0x14, 0x1a, //112 ~ 119
  0x12, 0x1c, 0x0e, 0x00, 0x03, 0x0d, 0x1f, 0x11, //120 ~ 127
  0x14, 0x1a, 0x08, 0x06, 0x05, 0x0b, 0x19, 0x17, //128 ~ 135
  0x1f, 0x11, 0x03, 0x0d, 0x0e, 0x00, 0x12, 0x1c, //136 ~ 143
  0x02, 0x0c, 0x1e, 0x10, 0x13, 0x1d, 0x0f, 0x01, //144 ~ 151
  0x09, 0x07, 0x15, 0x1b, 0x18, 0x16, 0x04, 0x0a, //152 ~ 159
  0x11, 0x1f, 0x0d, 0x03, 0x00, 0x0e, 0x1c, 0x12, //160 ~ 167
  0x1a, 0x14, 0x06, 0x08, 0x0b, 0x05, 0x17, 0x19, //168 ~ 175
  0x07, 0x09, 0x1b, 0x15, 0x16, 0x18, 0x0a, 0x04, //176 ~ 183
  0x0c, 0x02, 0x10, 0x1e, 0x1d, 0x13, 0x01, 0x0f, //184 ~ 191
  0x1e, 0x10, 0x02, 0x0c, 0x0f, 0x01, 0x13, 0x1d, //192 ~ 199
  0x15, 0x1b, 0x09, 0x07, 0x04, 0x0a, 0x18, 0x16, //200 ~ 207
  0x08, 0x06, 0x14, 0x1a, 0x19, 0x17, 0x05, 0x0b, //208 ~ 215
  0x03, 0x0d, 0x1f, 0x11, 0x12, 0x1c, 0x0e, 0x00, //216 ~ 223
  0x1b, 0x15, 0x07, 0x09, 0x0a, 0x04, 0x16, 0x18, //224 ~ 231
  0x10, 0x1e, 0x0c, 0x02, 0x01, 0x0f, 0x1d, 0x13, //232 ~ 239
  0x0d, 0x03, 0x11, 0x1f, 0x1c, 0x12, 0x00, 0x0e, //240 ~ 247
  0x06, 0x08, 0x1a, 0x14, 0x17, 0x19, 0x0b, 0x05  //248 ~ 255
};
#endif

#if (__CRC_6_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_6_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc6Table_Reflect_True_Poly_0x03[256] =
{
  0x00, 0x14, 0x28, 0x3c, 0x31, 0x25, 0x19, 0x0d, //0 ~ 7	    
  0x03, 0x17, 0x2b, 0x3f, 0x32, 0x26, 0x1a, 0x0e, //8 ~ 15	  
  0x06, 0x12, 0x2e, 0x3a, 0x37, 0x23, 0x1f, 0x0b, //16 ~ 23	
  0x05, 0x11, 0x2d, 0x39, 0x34, 0x20, 0x1c, 0x08, //24 ~ 31  
  0x0c, 0x18, 0x24, 0x30, 0x3d, 0x29, 0x15, 0x01, //32 ~ 39  
  0x0f, 0x1b, 0x27, 0x33, 0x3e, 0x2a, 0x16, 0x02, //40 ~ 47  
  0x0a, 0x1e, 0x22, 0x36, 0x3b, 0x2f, 0x13, 0x07, //48 ~ 55  
  0x09, 0x1d, 0x21, 0x35, 0x38, 0x2c, 0x10, 0x04, //56 ~ 63  
  0x18, 0x0c, 0x30, 0x24, 0x29, 0x3d, 0x01, 0x15, //64 ~ 71  
  0x1b, 0x0f, 0x33, 0x27, 0x2a, 0x3e, 0x02, 0x16, //72 ~ 79  
  0x1e, 0x0a, 0x36, 0x22, 0x2f, 0x3b, 0x07, 0x13, //80 ~ 87  
  0x1d, 0x09, 0x35, 0x21, 0x2c, 0x38, 0x04, 0x10, //88 ~ 95  
  0x14, 0x00, 0x3c, 0x28, 0x25, 0x31, 0x0d, 0x19, //96 ~ 103 
  0x17, 0x03, 0x3f, 0x2b, 0x26, 0x32, 0x0e, 0x1a, //104 ~ 111
  0x12, 0x06, 0x3a, 0x2e, 0x23, 0x37, 0x0b, 0x1f, //112 ~ 119
  0x11, 0x05, 0x39, 0x2d, 0x20, 0x34, 0x08, 0x1c, //120 ~ 127
  0x30, 0x24, 0x18, 0x0c, 0x01, 0x15, 0x29, 0x3d, //128 ~ 135
  0x33, 0x27, 0x1b, 0x0f, 0x02, 0x16, 0x2a, 0x3e, //136 ~ 143
  0x36, 0x22, 0x1e, 0x0a, 0x07, 0x13, 0x2f, 0x3b, //144 ~ 151
  0x35, 0x21, 0x1d, 0x09, 0x04, 0x10, 0x2c, 0x38, //152 ~ 159
  0x3c, 0x28, 0x14, 0x00, 0x0d, 0x19, 0x25, 0x31, //160 ~ 167
  0x3f, 0x2b, 0x17, 0x03, 0x0e, 0x1a, 0x26, 0x32, //168 ~ 175
  0x3a, 0x2e, 0x12, 0x06, 0x0b, 0x1f, 0x23, 0x37, //176 ~ 183
  0x39, 0x2d, 0x11, 0x05, 0x08, 0x1c, 0x20, 0x34, //184 ~ 191
  0x28, 0x3c, 0x00, 0x14, 0x19, 0x0d, 0x31, 0x25, //192 ~ 199
  0x2b, 0x3f, 0x03, 0x17, 0x1a, 0x0e, 0x32, 0x26, //200 ~ 207
  0x2e, 0x3a, 0x06, 0x12, 0x1f, 0x0b, 0x37, 0x23, //208 ~ 215
  0x2d, 0x39, 0x05, 0x11, 0x1c, 0x08, 0x34, 0x20, //216 ~ 223
  0x24, 0x30, 0x0c, 0x18, 0x15, 0x01, 0x3d, 0x29, //224 ~ 231
  0x27, 0x33, 0x0f, 0x1b, 0x16, 0x02, 0x3e, 0x2a, //232 ~ 239
  0x22, 0x36, 0x0a, 0x1e, 0x13, 0x07, 0x3b, 0x2f, //240 ~ 247
  0x21, 0x35, 0x09, 0x1d, 0x10, 0x04, 0x38, 0x2c //248 ~ 255
};
#endif

#if (__CRC_7_MMC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_7_MMC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc7Table_Reflect_False_Poly_0x09[256] =
{
  0x00, 0x12, 0x24, 0x36, 0x48, 0x5a, 0x6c, 0x7e, //0 ~ 7	    
  0x90, 0x82, 0xb4, 0xa6, 0xd8, 0xca, 0xfc, 0xee, //8 ~ 15	  
  0x32, 0x20, 0x16, 0x04, 0x7a, 0x68, 0x5e, 0x4c, //16 ~ 23	
  0xa2, 0xb0, 0x86, 0x94, 0xea, 0xf8, 0xce, 0xdc, //24 ~ 31  
  0x64, 0x76, 0x40, 0x52, 0x2c, 0x3e, 0x08, 0x1a, //32 ~ 39  
  0xf4, 0xe6, 0xd0, 0xc2, 0xbc, 0xae, 0x98, 0x8a, //40 ~ 47  
  0x56, 0x44, 0x72, 0x60, 0x1e, 0x0c, 0x3a, 0x28, //48 ~ 55  
  0xc6, 0xd4, 0xe2, 0xf0, 0x8e, 0x9c, 0xaa, 0xb8, //56 ~ 63  
  0xc8, 0xda, 0xec, 0xfe, 0x80, 0x92, 0xa4, 0xb6, //64 ~ 71  
  0x58, 0x4a, 0x7c, 0x6e, 0x10, 0x02, 0x34, 0x26, //72 ~ 79  
  0xfa, 0xe8, 0xde, 0xcc, 0xb2, 0xa0, 0x96, 0x84, //80 ~ 87  
  0x6a, 0x78, 0x4e, 0x5c, 0x22, 0x30, 0x06, 0x14, //88 ~ 95  
  0xac, 0xbe, 0x88, 0x9a, 0xe4, 0xf6, 0xc0, 0xd2, //96 ~ 103 
  0x3c, 0x2e, 0x18, 0x0a, 0x74, 0x66, 0x50, 0x42, //104 ~ 111
  0x9e, 0x8c, 0xba, 0xa8, 0xd6, 0xc4, 0xf2, 0xe0, //112 ~ 119
  0x0e, 0x1c, 0x2a, 0x38, 0x46, 0x54, 0x62, 0x70, //120 ~ 127
  0x82, 0x90, 0xa6, 0xb4, 0xca, 0xd8, 0xee, 0xfc, //128 ~ 135
  0x12, 0x00, 0x36, 0x24, 0x5a, 0x48, 0x7e, 0x6c, //136 ~ 143
  0xb0, 0xa2, 0x94, 0x86, 0xf8, 0xea, 0xdc, 0xce, //144 ~ 151
  0x20, 0x32, 0x04, 0x16, 0x68, 0x7a, 0x4c, 0x5e, //152 ~ 159
  0xe6, 0xf4, 0xc2, 0xd0, 0xae, 0xbc, 0x8a, 0x98, //160 ~ 167
  0x76, 0x64, 0x52, 0x40, 0x3e, 0x2c, 0x1a, 0x08, //168 ~ 175
  0xd4, 0xc6, 0xf0, 0xe2, 0x9c, 0x8e, 0xb8, 0xaa, //176 ~ 183
  0x44, 0x56, 0x60, 0x72, 0x0c, 0x1e, 0x28, 0x3a, //184 ~ 191
  0x4a, 0x58, 0x6e, 0x7c, 0x02, 0x10, 0x26, 0x34, //192 ~ 199
  0xda, 0xc8, 0xfe, 0xec, 0x92, 0x80, 0xb6, 0xa4, //200 ~ 207
  0x78, 0x6a, 0x5c, 0x4e, 0x30, 0x22, 0x14, 0x06, //208 ~ 215
  0xe8, 0xfa, 0xcc, 0xde, 0xa0, 0xb2, 0x84, 0x96, //216 ~ 223
  0x2e, 0x3c, 0x0a, 0x18, 0x66, 0x74, 0x42, 0x50, //224 ~ 231
  0xbe, 0xac, 0x9a, 0x88, 0xf6, 0xe4, 0xd2, 0xc0, //232 ~ 239
  0x1c, 0x0e, 0x38, 0x2a, 0x54, 0x46, 0x70, 0x62, //240 ~ 247
  0x8c, 0x9e, 0xa8, 0xba, 0xc4, 0xd6, 0xe0, 0xf2  //248 ~ 255
};
#endif

#if ((__CRC_8_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)) || \
    ((__CRC_8_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY))
const unsigned char cAr256_u8Crc8Table_Reflect_False_Poly_0x07[256] =
{
  0x00, 0x07, 0x0e, 0x09, 0x1c, 0x1b, 0x12, 0x15, //0 ~ 7	    
  0x38, 0x3f, 0x36, 0x31, 0x24, 0x23, 0x2a, 0x2d, //8 ~ 15	  
  0x70, 0x77, 0x7e, 0x79, 0x6c, 0x6b, 0x62, 0x65, //16 ~ 23	
  0x48, 0x4f, 0x46, 0x41, 0x54, 0x53, 0x5a, 0x5d, //24 ~ 31  
  0xe0, 0xe7, 0xee, 0xe9, 0xfc, 0xfb, 0xf2, 0xf5, //32 ~ 39  
  0xd8, 0xdf, 0xd6, 0xd1, 0xc4, 0xc3, 0xca, 0xcd, //40 ~ 47  
  0x90, 0x97, 0x9e, 0x99, 0x8c, 0x8b, 0x82, 0x85, //48 ~ 55  
  0xa8, 0xaf, 0xa6, 0xa1, 0xb4, 0xb3, 0xba, 0xbd, //56 ~ 63  
  0xc7, 0xc0, 0xc9, 0xce, 0xdb, 0xdc, 0xd5, 0xd2, //64 ~ 71  
  0xff, 0xf8, 0xf1, 0xf6, 0xe3, 0xe4, 0xed, 0xea, //72 ~ 79  
  0xb7, 0xb0, 0xb9, 0xbe, 0xab, 0xac, 0xa5, 0xa2, //80 ~ 87  
  0x8f, 0x88, 0x81, 0x86, 0x93, 0x94, 0x9d, 0x9a, //88 ~ 95  
  0x27, 0x20, 0x29, 0x2e, 0x3b, 0x3c, 0x35, 0x32, //96 ~ 103 
  0x1f, 0x18, 0x11, 0x16, 0x03, 0x04, 0x0d, 0x0a, //104 ~ 111
  0x57, 0x50, 0x59, 0x5e, 0x4b, 0x4c, 0x45, 0x42, //112 ~ 119
  0x6f, 0x68, 0x61, 0x66, 0x73, 0x74, 0x7d, 0x7a, //120 ~ 127
  0x89, 0x8e, 0x87, 0x80, 0x95, 0x92, 0x9b, 0x9c, //128 ~ 135
  0xb1, 0xb6, 0xbf, 0xb8, 0xad, 0xaa, 0xa3, 0xa4, //136 ~ 143
  0xf9, 0xfe, 0xf7, 0xf0, 0xe5, 0xe2, 0xeb, 0xec, //144 ~ 151
  0xc1, 0xc6, 0xcf, 0xc8, 0xdd, 0xda, 0xd3, 0xd4, //152 ~ 159
  0x69, 0x6e, 0x67, 0x60, 0x75, 0x72, 0x7b, 0x7c, //160 ~ 167
  0x51, 0x56, 0x5f, 0x58, 0x4d, 0x4a, 0x43, 0x44, //168 ~ 175
  0x19, 0x1e, 0x17, 0x10, 0x05, 0x02, 0x0b, 0x0c, //176 ~ 183
  0x21, 0x26, 0x2f, 0x28, 0x3d, 0x3a, 0x33, 0x34, //184 ~ 191
  0x4e, 0x49, 0x40, 0x47, 0x52, 0x55, 0x5c, 0x5b, //192 ~ 199
  0x76, 0x71, 0x78, 0x7f, 0x6a, 0x6d, 0x64, 0x63, //200 ~ 207
  0x3e, 0x39, 0x30, 0x37, 0x22, 0x25, 0x2c, 0x2b, //208 ~ 215
  0x06, 0x01, 0x08, 0x0f, 0x1a, 0x1d, 0x14, 0x13, //216 ~ 223
  0xae, 0xa9, 0xa0, 0xa7, 0xb2, 0xb5, 0xbc, 0xbb, //224 ~ 231
  0x96, 0x91, 0x98, 0x9f, 0x8a, 0x8d, 0x84, 0x83, //232 ~ 239
  0xde, 0xd9, 0xd0, 0xd7, 0xc2, 0xc5, 0xcc, 0xcb, //240 ~ 247
  0xe6, 0xe1, 0xe8, 0xef, 0xfa, 0xfd, 0xf4, 0xf3  //248 ~ 255
};
#endif

#if (__CRC_8_ROHC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ROHC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc8Table_Reflect_True_Poly_0x07[256] =
{
  0x00, 0x91, 0xe3, 0x72, 0x07, 0x96, 0xe4, 0x75, //0 ~ 7	    
  0x0e, 0x9f, 0xed, 0x7c, 0x09, 0x98, 0xea, 0x7b, //8 ~ 15	  
  0x1c, 0x8d, 0xff, 0x6e, 0x1b, 0x8a, 0xf8, 0x69, //16 ~ 23	
  0x12, 0x83, 0xf1, 0x60, 0x15, 0x84, 0xf6, 0x67, //24 ~ 31  
  0x38, 0xa9, 0xdb, 0x4a, 0x3f, 0xae, 0xdc, 0x4d, //32 ~ 39  
  0x36, 0xa7, 0xd5, 0x44, 0x31, 0xa0, 0xd2, 0x43, //40 ~ 47  
  0x24, 0xb5, 0xc7, 0x56, 0x23, 0xb2, 0xc0, 0x51, //48 ~ 55  
  0x2a, 0xbb, 0xc9, 0x58, 0x2d, 0xbc, 0xce, 0x5f, //56 ~ 63  
  0x70, 0xe1, 0x93, 0x02, 0x77, 0xe6, 0x94, 0x05, //64 ~ 71  
  0x7e, 0xef, 0x9d, 0x0c, 0x79, 0xe8, 0x9a, 0x0b, //72 ~ 79  
  0x6c, 0xfd, 0x8f, 0x1e, 0x6b, 0xfa, 0x88, 0x19, //80 ~ 87  
  0x62, 0xf3, 0x81, 0x10, 0x65, 0xf4, 0x86, 0x17, //88 ~ 95  
  0x48, 0xd9, 0xab, 0x3a, 0x4f, 0xde, 0xac, 0x3d, //96 ~ 103 
  0x46, 0xd7, 0xa5, 0x34, 0x41, 0xd0, 0xa2, 0x33, //104 ~ 111
  0x54, 0xc5, 0xb7, 0x26, 0x53, 0xc2, 0xb0, 0x21, //112 ~ 119
  0x5a, 0xcb, 0xb9, 0x28, 0x5d, 0xcc, 0xbe, 0x2f, //120 ~ 127
  0xe0, 0x71, 0x03, 0x92, 0xe7, 0x76, 0x04, 0x95, //128 ~ 135
  0xee, 0x7f, 0x0d, 0x9c, 0xe9, 0x78, 0x0a, 0x9b, //136 ~ 143
  0xfc, 0x6d, 0x1f, 0x8e, 0xfb, 0x6a, 0x18, 0x89, //144 ~ 151
  0xf2, 0x63, 0x11, 0x80, 0xf5, 0x64, 0x16, 0x87, //152 ~ 159
  0xd8, 0x49, 0x3b, 0xaa, 0xdf, 0x4e, 0x3c, 0xad, //160 ~ 167
  0xd6, 0x47, 0x35, 0xa4, 0xd1, 0x40, 0x32, 0xa3, //168 ~ 175
  0xc4, 0x55, 0x27, 0xb6, 0xc3, 0x52, 0x20, 0xb1, //176 ~ 183
  0xca, 0x5b, 0x29, 0xb8, 0xcd, 0x5c, 0x2e, 0xbf, //184 ~ 191
  0x90, 0x01, 0x73, 0xe2, 0x97, 0x06, 0x74, 0xe5, //192 ~ 199
  0x9e, 0x0f, 0x7d, 0xec, 0x99, 0x08, 0x7a, 0xeb, //200 ~ 207
  0x8c, 0x1d, 0x6f, 0xfe, 0x8b, 0x1a, 0x68, 0xf9, //208 ~ 215
  0x82, 0x13, 0x61, 0xf0, 0x85, 0x14, 0x66, 0xf7, //216 ~ 223
  0xa8, 0x39, 0x4b, 0xda, 0xaf, 0x3e, 0x4c, 0xdd, //224 ~ 231
  0xa6, 0x37, 0x45, 0xd4, 0xa1, 0x30, 0x42, 0xd3, //232 ~ 239
  0xb4, 0x25, 0x57, 0xc6, 0xb3, 0x22, 0x50, 0xc1, //240 ~ 247
  0xba, 0x2b, 0x59, 0xc8, 0xbd, 0x2c, 0x5e, 0xcf  //248 ~ 255
};
#endif

#if (__CRC_8_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_MAXIM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned char cAr256_u8Crc8Table_Reflect_True_Poly_0x31[256] =
{
  0x00, 0x5e, 0xbc, 0xe2, 0x61, 0x3f, 0xdd, 0x83, //0 ~ 7	    
  0xc2, 0x9c, 0x7e, 0x20, 0xa3, 0xfd, 0x1f, 0x41, //8 ~ 15	  
  0x9d, 0xc3, 0x21, 0x7f, 0xfc, 0xa2, 0x40, 0x1e, //16 ~ 23	
  0x5f, 0x01, 0xe3, 0xbd, 0x3e, 0x60, 0x82, 0xdc, //24 ~ 31  
  0x23, 0x7d, 0x9f, 0xc1, 0x42, 0x1c, 0xfe, 0xa0, //32 ~ 39  
  0xe1, 0xbf, 0x5d, 0x03, 0x80, 0xde, 0x3c, 0x62, //40 ~ 47  
  0xbe, 0xe0, 0x02, 0x5c, 0xdf, 0x81, 0x63, 0x3d, //48 ~ 55  
  0x7c, 0x22, 0xc0, 0x9e, 0x1d, 0x43, 0xa1, 0xff, //56 ~ 63  
  0x46, 0x18, 0xfa, 0xa4, 0x27, 0x79, 0x9b, 0xc5, //64 ~ 71  
  0x84, 0xda, 0x38, 0x66, 0xe5, 0xbb, 0x59, 0x07, //72 ~ 79  
  0xdb, 0x85, 0x67, 0x39, 0xba, 0xe4, 0x06, 0x58, //80 ~ 87  
  0x19, 0x47, 0xa5, 0xfb, 0x78, 0x26, 0xc4, 0x9a, //88 ~ 95  
  0x65, 0x3b, 0xd9, 0x87, 0x04, 0x5a, 0xb8, 0xe6, //96 ~ 103 
  0xa7, 0xf9, 0x1b, 0x45, 0xc6, 0x98, 0x7a, 0x24, //104 ~ 111
  0xf8, 0xa6, 0x44, 0x1a, 0x99, 0xc7, 0x25, 0x7b, //112 ~ 119
  0x3a, 0x64, 0x86, 0xd8, 0x5b, 0x05, 0xe7, 0xb9, //120 ~ 127
  0x8c, 0xd2, 0x30, 0x6e, 0xed, 0xb3, 0x51, 0x0f, //128 ~ 135
  0x4e, 0x10, 0xf2, 0xac, 0x2f, 0x71, 0x93, 0xcd, //136 ~ 143
  0x11, 0x4f, 0xad, 0xf3, 0x70, 0x2e, 0xcc, 0x92, //144 ~ 151
  0xd3, 0x8d, 0x6f, 0x31, 0xb2, 0xec, 0x0e, 0x50, //152 ~ 159
  0xaf, 0xf1, 0x13, 0x4d, 0xce, 0x90, 0x72, 0x2c, //160 ~ 167
  0x6d, 0x33, 0xd1, 0x8f, 0x0c, 0x52, 0xb0, 0xee, //168 ~ 175
  0x32, 0x6c, 0x8e, 0xd0, 0x53, 0x0d, 0xef, 0xb1, //176 ~ 183
  0xf0, 0xae, 0x4c, 0x12, 0x91, 0xcf, 0x2d, 0x73, //184 ~ 191
  0xca, 0x94, 0x76, 0x28, 0xab, 0xf5, 0x17, 0x49, //192 ~ 199
  0x08, 0x56, 0xb4, 0xea, 0x69, 0x37, 0xd5, 0x8b, //200 ~ 207
  0x57, 0x09, 0xeb, 0xb5, 0x36, 0x68, 0x8a, 0xd4, //208 ~ 215
  0x95, 0xcb, 0x29, 0x77, 0xf4, 0xaa, 0x48, 0x16, //216 ~ 223
  0xe9, 0xb7, 0x55, 0x0b, 0x88, 0xd6, 0x34, 0x6a, //224 ~ 231
  0x2b, 0x75, 0x97, 0xc9, 0x4a, 0x14, 0xf6, 0xa8, //232 ~ 239
  0x74, 0x2a, 0xc8, 0x96, 0x15, 0x4b, 0xa9, 0xf7, //240 ~ 247
  0xb6, 0xe8, 0x0a, 0x54, 0xd7, 0x89, 0x6b, 0x35  //248 ~ 255
};
#endif

#if ((__CRC_16_IBM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_IBM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)) || \
    ((__CRC_16_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MAXIM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)) || \
    ((__CRC_16_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_USB_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)) || \
    ((__CRC_16_MODBUS_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MODBUS_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY))
const unsigned short cAr256_u16Crc16Table_Reflect_True_Poly_0x8005[256] =
{
  0x0000, 0xc0c1, 0xc181, 0x0140, 0xc301, 0x03c0, 0x0280, 0xc241, //0 ~ 7	    
  0xc601, 0x06c0, 0x0780, 0xc741, 0x0500, 0xc5c1, 0xc481, 0x0440, //8 ~ 15	  
  0xcc01, 0x0cc0, 0x0d80, 0xcd41, 0x0f00, 0xcfc1, 0xce81, 0x0e40, //16 ~ 23	
  0x0a00, 0xcac1, 0xcb81, 0x0b40, 0xc901, 0x09c0, 0x0880, 0xc841, //24 ~ 31  
  0xd801, 0x18c0, 0x1980, 0xd941, 0x1b00, 0xdbc1, 0xda81, 0x1a40, //32 ~ 39  
  0x1e00, 0xdec1, 0xdf81, 0x1f40, 0xdd01, 0x1dc0, 0x1c80, 0xdc41, //40 ~ 47  
  0x1400, 0xd4c1, 0xd581, 0x1540, 0xd701, 0x17c0, 0x1680, 0xd641, //48 ~ 55  
  0xd201, 0x12c0, 0x1380, 0xd341, 0x1100, 0xd1c1, 0xd081, 0x1040, //56 ~ 63  
  0xf001, 0x30c0, 0x3180, 0xf141, 0x3300, 0xf3c1, 0xf281, 0x3240, //64 ~ 71  
  0x3600, 0xf6c1, 0xf781, 0x3740, 0xf501, 0x35c0, 0x3480, 0xf441, //72 ~ 79  
  0x3c00, 0xfcc1, 0xfd81, 0x3d40, 0xff01, 0x3fc0, 0x3e80, 0xfe41, //80 ~ 87  
  0xfa01, 0x3ac0, 0x3b80, 0xfb41, 0x3900, 0xf9c1, 0xf881, 0x3840, //88 ~ 95  
  0x2800, 0xe8c1, 0xe981, 0x2940, 0xeb01, 0x2bc0, 0x2a80, 0xea41, //96 ~ 103 
  0xee01, 0x2ec0, 0x2f80, 0xef41, 0x2d00, 0xedc1, 0xec81, 0x2c40, //104 ~ 111
  0xe401, 0x24c0, 0x2580, 0xe541, 0x2700, 0xe7c1, 0xe681, 0x2640, //112 ~ 119
  0x2200, 0xe2c1, 0xe381, 0x2340, 0xe101, 0x21c0, 0x2080, 0xe041, //120 ~ 127
  0xa001, 0x60c0, 0x6180, 0xa141, 0x6300, 0xa3c1, 0xa281, 0x6240, //128 ~ 135
  0x6600, 0xa6c1, 0xa781, 0x6740, 0xa501, 0x65c0, 0x6480, 0xa441, //136 ~ 143
  0x6c00, 0xacc1, 0xad81, 0x6d40, 0xaf01, 0x6fc0, 0x6e80, 0xae41, //144 ~ 151
  0xaa01, 0x6ac0, 0x6b80, 0xab41, 0x6900, 0xa9c1, 0xa881, 0x6840, //152 ~ 159
  0x7800, 0xb8c1, 0xb981, 0x7940, 0xbb01, 0x7bc0, 0x7a80, 0xba41, //160 ~ 167
  0xbe01, 0x7ec0, 0x7f80, 0xbf41, 0x7d00, 0xbdc1, 0xbc81, 0x7c40, //168 ~ 175
  0xb401, 0x74c0, 0x7580, 0xb541, 0x7700, 0xb7c1, 0xb681, 0x7640, //176 ~ 183
  0x7200, 0xb2c1, 0xb381, 0x7340, 0xb101, 0x71c0, 0x7080, 0xb041, //184 ~ 191
  0x5000, 0x90c1, 0x9181, 0x5140, 0x9301, 0x53c0, 0x5280, 0x9241, //192 ~ 199
  0x9601, 0x56c0, 0x5780, 0x9741, 0x5500, 0x95c1, 0x9481, 0x5440, //200 ~ 207
  0x9c01, 0x5cc0, 0x5d80, 0x9d41, 0x5f00, 0x9fc1, 0x9e81, 0x5e40, //208 ~ 215
  0x5a00, 0x9ac1, 0x9b81, 0x5b40, 0x9901, 0x59c0, 0x5880, 0x9841, //216 ~ 223
  0x8801, 0x48c0, 0x4980, 0x8941, 0x4b00, 0x8bc1, 0x8a81, 0x4a40, //224 ~ 231
  0x4e00, 0x8ec1, 0x8f81, 0x4f40, 0x8d01, 0x4dc0, 0x4c80, 0x8c41, //232 ~ 239
  0x4400, 0x84c1, 0x8581, 0x4540, 0x8701, 0x47c0, 0x4680, 0x8641, //240 ~ 247
  0x8201, 0x42c0, 0x4380, 0x8341, 0x4100, 0x81c1, 0x8081, 0x4040  //248 ~ 255
};
#endif

#if ((__CRC_16_CCITT_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)) || \
    ((__CRC_16_X25_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_X25_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY))
const unsigned short cAr256_u16Crc16Table_Reflect_True_Poly_0x1021[256] =
{
  0x0000, 0x1189, 0x2312, 0x329b, 0x4624, 0x57ad, 0x6536, 0x74bf, //0 ~ 7	    
  0x8c48, 0x9dc1, 0xaf5a, 0xbed3, 0xca6c, 0xdbe5, 0xe97e, 0xf8f7, //8 ~ 15	  
  0x1081, 0x0108, 0x3393, 0x221a, 0x56a5, 0x472c, 0x75b7, 0x643e, //16 ~ 23	
  0x9cc9, 0x8d40, 0xbfdb, 0xae52, 0xdaed, 0xcb64, 0xf9ff, 0xe876, //24 ~ 31  
  0x2102, 0x308b, 0x0210, 0x1399, 0x6726, 0x76af, 0x4434, 0x55bd, //32 ~ 39  
  0xad4a, 0xbcc3, 0x8e58, 0x9fd1, 0xeb6e, 0xfae7, 0xc87c, 0xd9f5, //40 ~ 47  
  0x3183, 0x200a, 0x1291, 0x0318, 0x77a7, 0x662e, 0x54b5, 0x453c, //48 ~ 55  
  0xbdcb, 0xac42, 0x9ed9, 0x8f50, 0xfbef, 0xea66, 0xd8fd, 0xc974, //56 ~ 63  
  0x4204, 0x538d, 0x6116, 0x709f, 0x0420, 0x15a9, 0x2732, 0x36bb, //64 ~ 71  
  0xce4c, 0xdfc5, 0xed5e, 0xfcd7, 0x8868, 0x99e1, 0xab7a, 0xbaf3, //72 ~ 79  
  0x5285, 0x430c, 0x7197, 0x601e, 0x14a1, 0x0528, 0x37b3, 0x263a, //80 ~ 87  
  0xdecd, 0xcf44, 0xfddf, 0xec56, 0x98e9, 0x8960, 0xbbfb, 0xaa72, //88 ~ 95  
  0x6306, 0x728f, 0x4014, 0x519d, 0x2522, 0x34ab, 0x0630, 0x17b9, //96 ~ 103 
  0xef4e, 0xfec7, 0xcc5c, 0xddd5, 0xa96a, 0xb8e3, 0x8a78, 0x9bf1, //104 ~ 111
  0x7387, 0x620e, 0x5095, 0x411c, 0x35a3, 0x242a, 0x16b1, 0x0738, //112 ~ 119
  0xffcf, 0xee46, 0xdcdd, 0xcd54, 0xb9eb, 0xa862, 0x9af9, 0x8b70, //120 ~ 127
  0x8408, 0x9581, 0xa71a, 0xb693, 0xc22c, 0xd3a5, 0xe13e, 0xf0b7, //128 ~ 135
  0x0840, 0x19c9, 0x2b52, 0x3adb, 0x4e64, 0x5fed, 0x6d76, 0x7cff, //136 ~ 143
  0x9489, 0x8500, 0xb79b, 0xa612, 0xd2ad, 0xc324, 0xf1bf, 0xe036, //144 ~ 151
  0x18c1, 0x0948, 0x3bd3, 0x2a5a, 0x5ee5, 0x4f6c, 0x7df7, 0x6c7e, //152 ~ 159
  0xa50a, 0xb483, 0x8618, 0x9791, 0xe32e, 0xf2a7, 0xc03c, 0xd1b5, //160 ~ 167
  0x2942, 0x38cb, 0x0a50, 0x1bd9, 0x6f66, 0x7eef, 0x4c74, 0x5dfd, //168 ~ 175
  0xb58b, 0xa402, 0x9699, 0x8710, 0xf3af, 0xe226, 0xd0bd, 0xc134, //176 ~ 183
  0x39c3, 0x284a, 0x1ad1, 0x0b58, 0x7fe7, 0x6e6e, 0x5cf5, 0x4d7c, //184 ~ 191
  0xc60c, 0xd785, 0xe51e, 0xf497, 0x8028, 0x91a1, 0xa33a, 0xb2b3, //192 ~ 199
  0x4a44, 0x5bcd, 0x6956, 0x78df, 0x0c60, 0x1de9, 0x2f72, 0x3efb, //200 ~ 207
  0xd68d, 0xc704, 0xf59f, 0xe416, 0x90a9, 0x8120, 0xb3bb, 0xa232, //208 ~ 215
  0x5ac5, 0x4b4c, 0x79d7, 0x685e, 0x1ce1, 0x0d68, 0x3ff3, 0x2e7a, //216 ~ 223
  0xe70e, 0xf687, 0xc41c, 0xd595, 0xa12a, 0xb0a3, 0x8238, 0x93b1, //224 ~ 231
  0x6b46, 0x7acf, 0x4854, 0x59dd, 0x2d62, 0x3ceb, 0x0e70, 0x1ff9, //232 ~ 239
  0xf78f, 0xe606, 0xd49d, 0xc514, 0xb1ab, 0xa022, 0x92b9, 0x8330, //240 ~ 247
  0x7bc7, 0x6a4e, 0x58d5, 0x495c, 0x3de3, 0x2c6a, 0x1ef1, 0x0f78  //248 ~ 255
};
#endif

#if ((__CRC_16_CCITT_FALSE_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_FALSE_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)) || \
    ((__CRC_16_XMODEM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_XMODEM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY))
const unsigned short cAr256_u16Crc16Table_Reflect_False_Poly_0x1021[256] =
{
  0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, //0 ~ 7	    
  0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, //8 ~ 15	  
  0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, //16 ~ 23	
  0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, //24 ~ 31  
  0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, //32 ~ 39  
  0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, //40 ~ 47  
  0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, //48 ~ 55  
  0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, //56 ~ 63  
  0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, //64 ~ 71  
  0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, //72 ~ 79  
  0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, //80 ~ 87  
  0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, //88 ~ 95  
  0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, //96 ~ 103 
  0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, //104 ~ 111
  0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, //112 ~ 119
  0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, //120 ~ 127
  0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, //128 ~ 135
  0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, //136 ~ 143
  0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, //144 ~ 151
  0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, //152 ~ 159
  0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, //160 ~ 167
  0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, //168 ~ 175
  0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, //176 ~ 183
  0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, //184 ~ 191
  0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, //192 ~ 199
  0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, //200 ~ 207
  0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, //208 ~ 215
  0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, //216 ~ 223
  0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, //224 ~ 231
  0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, //232 ~ 239
  0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, //240 ~ 247
  0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0  //248 ~ 255
};
#endif

#if (__CRC_16_DNP_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_DNP_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned short cAr256_u16Crc16Table_Reflect_True_Poly_0x3d65[256] =
{
  0x0000, 0x365e, 0x6cbc, 0x5ae2, 0xd978, 0xef26, 0xb5c4, 0x839a, //0 ~ 7	    
  0xff89, 0xc9d7, 0x9335, 0xa56b, 0x26f1, 0x10af, 0x4a4d, 0x7c13, //8 ~ 15	  
  0xb26b, 0x8435, 0xded7, 0xe889, 0x6b13, 0x5d4d, 0x07af, 0x31f1, //16 ~ 23	
  0x4de2, 0x7bbc, 0x215e, 0x1700, 0x949a, 0xa2c4, 0xf826, 0xce78, //24 ~ 31  
  0x29af, 0x1ff1, 0x4513, 0x734d, 0xf0d7, 0xc689, 0x9c6b, 0xaa35, //32 ~ 39  
  0xd626, 0xe078, 0xba9a, 0x8cc4, 0x0f5e, 0x3900, 0x63e2, 0x55bc, //40 ~ 47  
  0x9bc4, 0xad9a, 0xf778, 0xc126, 0x42bc, 0x74e2, 0x2e00, 0x185e, //48 ~ 55  
  0x644d, 0x5213, 0x08f1, 0x3eaf, 0xbd35, 0x8b6b, 0xd189, 0xe7d7, //56 ~ 63  
  0x535e, 0x6500, 0x3fe2, 0x09bc, 0x8a26, 0xbc78, 0xe69a, 0xd0c4, //64 ~ 71  
  0xacd7, 0x9a89, 0xc06b, 0xf635, 0x75af, 0x43f1, 0x1913, 0x2f4d, //72 ~ 79  
  0xe135, 0xd76b, 0x8d89, 0xbbd7, 0x384d, 0x0e13, 0x54f1, 0x62af, //80 ~ 87  
  0x1ebc, 0x28e2, 0x7200, 0x445e, 0xc7c4, 0xf19a, 0xab78, 0x9d26, //88 ~ 95  
  0x7af1, 0x4caf, 0x164d, 0x2013, 0xa389, 0x95d7, 0xcf35, 0xf96b, //96 ~ 103 
  0x8578, 0xb326, 0xe9c4, 0xdf9a, 0x5c00, 0x6a5e, 0x30bc, 0x06e2, //104 ~ 111
  0xc89a, 0xfec4, 0xa426, 0x9278, 0x11e2, 0x27bc, 0x7d5e, 0x4b00, //112 ~ 119
  0x3713, 0x014d, 0x5baf, 0x6df1, 0xee6b, 0xd835, 0x82d7, 0xb489, //120 ~ 127
  0xa6bc, 0x90e2, 0xca00, 0xfc5e, 0x7fc4, 0x499a, 0x1378, 0x2526, //128 ~ 135
  0x5935, 0x6f6b, 0x3589, 0x03d7, 0x804d, 0xb613, 0xecf1, 0xdaaf, //136 ~ 143
  0x14d7, 0x2289, 0x786b, 0x4e35, 0xcdaf, 0xfbf1, 0xa113, 0x974d, //144 ~ 151
  0xeb5e, 0xdd00, 0x87e2, 0xb1bc, 0x3226, 0x0478, 0x5e9a, 0x68c4, //152 ~ 159
  0x8f13, 0xb94d, 0xe3af, 0xd5f1, 0x566b, 0x6035, 0x3ad7, 0x0c89, //160 ~ 167
  0x709a, 0x46c4, 0x1c26, 0x2a78, 0xa9e2, 0x9fbc, 0xc55e, 0xf300, //168 ~ 175
  0x3d78, 0x0b26, 0x51c4, 0x679a, 0xe400, 0xd25e, 0x88bc, 0xbee2, //176 ~ 183
  0xc2f1, 0xf4af, 0xae4d, 0x9813, 0x1b89, 0x2dd7, 0x7735, 0x416b, //184 ~ 191
  0xf5e2, 0xc3bc, 0x995e, 0xaf00, 0x2c9a, 0x1ac4, 0x4026, 0x7678, //192 ~ 199
  0x0a6b, 0x3c35, 0x66d7, 0x5089, 0xd313, 0xe54d, 0xbfaf, 0x89f1, //200 ~ 207
  0x4789, 0x71d7, 0x2b35, 0x1d6b, 0x9ef1, 0xa8af, 0xf24d, 0xc413, //208 ~ 215
  0xb800, 0x8e5e, 0xd4bc, 0xe2e2, 0x6178, 0x5726, 0x0dc4, 0x3b9a, //216 ~ 223
  0xdc4d, 0xea13, 0xb0f1, 0x86af, 0x0535, 0x336b, 0x6989, 0x5fd7, //224 ~ 231
  0x23c4, 0x159a, 0x4f78, 0x7926, 0xfabc, 0xcce2, 0x9600, 0xa05e, //232 ~ 239
  0x6e26, 0x5878, 0x029a, 0x34c4, 0xb75e, 0x8100, 0xdbe2, 0xedbc, //240 ~ 247
  0x91af, 0xa7f1, 0xfd13, 0xcb4d, 0x48d7, 0x7e89, 0x246b, 0x1235  //248 ~ 255
};
#endif

#if (__CRC_32_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned int cAr256_u32Crc32Table_Reflect_True_Poly_0x04c11db7[256] =
{
  0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3, //0 ~ 7	    
  0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988, 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91, //8 ~ 15	  
  0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de, 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7, //16 ~ 23	
  0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5, //24 ~ 31  
  0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172, 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b, //32 ~ 39  
  0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940, 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59, //40 ~ 47  
  0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f, //48 ~ 55  
  0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924, 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d, //56 ~ 63  
  0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433, //64 ~ 71  
  0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818, 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01, //72 ~ 79  
  0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e, 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457, //80 ~ 87  
  0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65, //88 ~ 95  
  0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, 0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb, //96 ~ 103 
  0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0, 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9, //104 ~ 111
  0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f, //112 ~ 119
  0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad, //120 ~ 127
  0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a, 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683, //128 ~ 135
  0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1, //136 ~ 143
  0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7, //144 ~ 151
  0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5, //152 ~ 159
  0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b, //160 ~ 167
  0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79, //168 ~ 175
  0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236, 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f, //176 ~ 183
  0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d, //184 ~ 191
  0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a, 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713, //192 ~ 199
  0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38, 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, //200 ~ 207
  0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777, //208 ~ 215
  0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c, 0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45, //216 ~ 223
  0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2, 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db, //224 ~ 231
  0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9, //232 ~ 239
  0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf, //240 ~ 247
  0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d  //248 ~ 255
};
#endif

#if (__CRC_32_MPEG_2_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_MPEG_2_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
const unsigned int cAr256_u32Crc32Table_Reflect_False_Poly_0x04c11db7[256] =
{
  0x00000000, 0x04c11db7, 0x09823b6e, 0x0d4326d9, 0x130476dc, 0x17c56b6b, 0x1a864db2, 0x1e475005, //0 ~ 7	    
  0x2608edb8, 0x22c9f00f, 0x2f8ad6d6, 0x2b4bcb61, 0x350c9b64, 0x31cd86d3, 0x3c8ea00a, 0x384fbdbd, //8 ~ 15	  
  0x4c11db70, 0x48d0c6c7, 0x4593e01e, 0x4152fda9, 0x5f15adac, 0x5bd4b01b, 0x569796c2, 0x52568b75, //16 ~ 23	
  0x6a1936c8, 0x6ed82b7f, 0x639b0da6, 0x675a1011, 0x791d4014, 0x7ddc5da3, 0x709f7b7a, 0x745e66cd, //24 ~ 31  
  0x9823b6e0, 0x9ce2ab57, 0x91a18d8e, 0x95609039, 0x8b27c03c, 0x8fe6dd8b, 0x82a5fb52, 0x8664e6e5, //32 ~ 39  
  0xbe2b5b58, 0xbaea46ef, 0xb7a96036, 0xb3687d81, 0xad2f2d84, 0xa9ee3033, 0xa4ad16ea, 0xa06c0b5d, //40 ~ 47  
  0xd4326d90, 0xd0f37027, 0xddb056fe, 0xd9714b49, 0xc7361b4c, 0xc3f706fb, 0xceb42022, 0xca753d95, //48 ~ 55  
  0xf23a8028, 0xf6fb9d9f, 0xfbb8bb46, 0xff79a6f1, 0xe13ef6f4, 0xe5ffeb43, 0xe8bccd9a, 0xec7dd02d, //56 ~ 63  
  0x34867077, 0x30476dc0, 0x3d044b19, 0x39c556ae, 0x278206ab, 0x23431b1c, 0x2e003dc5, 0x2ac12072, //64 ~ 71  
  0x128e9dcf, 0x164f8078, 0x1b0ca6a1, 0x1fcdbb16, 0x018aeb13, 0x054bf6a4, 0x0808d07d, 0x0cc9cdca, //72 ~ 79  
  0x7897ab07, 0x7c56b6b0, 0x71159069, 0x75d48dde, 0x6b93dddb, 0x6f52c06c, 0x6211e6b5, 0x66d0fb02, //80 ~ 87  
  0x5e9f46bf, 0x5a5e5b08, 0x571d7dd1, 0x53dc6066, 0x4d9b3063, 0x495a2dd4, 0x44190b0d, 0x40d816ba, //88 ~ 95  
  0xaca5c697, 0xa864db20, 0xa527fdf9, 0xa1e6e04e, 0xbfa1b04b, 0xbb60adfc, 0xb6238b25, 0xb2e29692, //96 ~ 103 
  0x8aad2b2f, 0x8e6c3698, 0x832f1041, 0x87ee0df6, 0x99a95df3, 0x9d684044, 0x902b669d, 0x94ea7b2a, //104 ~ 111
  0xe0b41de7, 0xe4750050, 0xe9362689, 0xedf73b3e, 0xf3b06b3b, 0xf771768c, 0xfa325055, 0xfef34de2, //112 ~ 119
  0xc6bcf05f, 0xc27dede8, 0xcf3ecb31, 0xcbffd686, 0xd5b88683, 0xd1799b34, 0xdc3abded, 0xd8fba05a, //120 ~ 127
  0x690ce0ee, 0x6dcdfd59, 0x608edb80, 0x644fc637, 0x7a089632, 0x7ec98b85, 0x738aad5c, 0x774bb0eb, //128 ~ 135
  0x4f040d56, 0x4bc510e1, 0x46863638, 0x42472b8f, 0x5c007b8a, 0x58c1663d, 0x558240e4, 0x51435d53, //136 ~ 143
  0x251d3b9e, 0x21dc2629, 0x2c9f00f0, 0x285e1d47, 0x36194d42, 0x32d850f5, 0x3f9b762c, 0x3b5a6b9b, //144 ~ 151
  0x0315d626, 0x07d4cb91, 0x0a97ed48, 0x0e56f0ff, 0x1011a0fa, 0x14d0bd4d, 0x19939b94, 0x1d528623, //152 ~ 159
  0xf12f560e, 0xf5ee4bb9, 0xf8ad6d60, 0xfc6c70d7, 0xe22b20d2, 0xe6ea3d65, 0xeba91bbc, 0xef68060b, //160 ~ 167
  0xd727bbb6, 0xd3e6a601, 0xdea580d8, 0xda649d6f, 0xc423cd6a, 0xc0e2d0dd, 0xcda1f604, 0xc960ebb3, //168 ~ 175
  0xbd3e8d7e, 0xb9ff90c9, 0xb4bcb610, 0xb07daba7, 0xae3afba2, 0xaafbe615, 0xa7b8c0cc, 0xa379dd7b, //176 ~ 183
  0x9b3660c6, 0x9ff77d71, 0x92b45ba8, 0x9675461f, 0x8832161a, 0x8cf30bad, 0x81b02d74, 0x857130c3, //184 ~ 191
  0x5d8a9099, 0x594b8d2e, 0x5408abf7, 0x50c9b640, 0x4e8ee645, 0x4a4ffbf2, 0x470cdd2b, 0x43cdc09c, //192 ~ 199
  0x7b827d21, 0x7f436096, 0x7200464f, 0x76c15bf8, 0x68860bfd, 0x6c47164a, 0x61043093, 0x65c52d24, //200 ~ 207
  0x119b4be9, 0x155a565e, 0x18197087, 0x1cd86d30, 0x029f3d35, 0x065e2082, 0x0b1d065b, 0x0fdc1bec, //208 ~ 215
  0x3793a651, 0x3352bbe6, 0x3e119d3f, 0x3ad08088, 0x2497d08d, 0x2056cd3a, 0x2d15ebe3, 0x29d4f654, //216 ~ 223
  0xc5a92679, 0xc1683bce, 0xcc2b1d17, 0xc8ea00a0, 0xd6ad50a5, 0xd26c4d12, 0xdf2f6bcb, 0xdbee767c, //224 ~ 231
  0xe3a1cbc1, 0xe760d676, 0xea23f0af, 0xeee2ed18, 0xf0a5bd1d, 0xf464a0aa, 0xf9278673, 0xfde69bc4, //232 ~ 239
  0x89b8fd09, 0x8d79e0be, 0x803ac667, 0x84fbdbd0, 0x9abc8bd5, 0x9e7d9662, 0x933eb0bb, 0x97ffad0c, //240 ~ 247
  0xafb010b1, 0xab710d06, 0xa6322bdf, 0xa2f33668, 0xbcb4666d, 0xb8757bda, 0xb5365d03, 0xb1f740b4 //248 ~ 255
};
#endif

#if (__CRC_4_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_4_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc4_itu_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-4/ITU parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-4/ITU           x4+x+1
*       Poly:    0x03
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc4_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u8CrcRet & 1)
        l_u8CrcRet = (l_u8CrcRet >> 1) ^ 0x0C; // 0x0C = (reverse 0x03)>>(8-4)
      else
        l_u8CrcRet = (l_u8CrcRet >> 1);
    }
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_4_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_4_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc4_itu_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-4/ITU parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-4/ITU           x4+x+1
*       Poly:    0x03
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc4_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc4Table_Reflect_True_Poly_0x03[l_u8Index];
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_5_EPC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_EPC_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc5_epc_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-5/EPC parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-5/EPC           x5+x3+1
*       Poly:    0x09
*       Init:    0x09
*       Refin:   False
*       Refout:  False
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc5_epc_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0x48; // Initial value: 0x48 = 0x09<<(8-5)
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; l_u8Loop++)
    {
      if (l_u8CrcRet & 0x80)
        l_u8CrcRet = (l_u8CrcRet << 1) ^ 0x48; // 0x48 = 0x09<<(8-5)
      else
        l_u8CrcRet <<= 1;
    }
  }
  return l_u8CrcRet >> 3;
}
#endif

#if (__CRC_5_EPC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_EPC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc5_epc_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-5/EPC parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-5/EPC           x5+x3+1
*       Poly:    0x09
*       Init:    0x09
*       Refin:   False
*       Refout:  False
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc5_epc_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0x48;// Initial value: 0x48 = 0x09<<(8-5)
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc5Table_Reflect_False_Poly_0x09[l_u8Index];
  }
  return l_u8CrcRet >> 3;
}
#endif

#if (__CRC_5_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc5_itu_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-5/ITU parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-5/ITU           x5+x4+x2+1
*       Poly:    0x15
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc5_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u8CrcRet & 1)
        l_u8CrcRet = (l_u8CrcRet >> 1) ^ 0x15; // 0x15 = (reverse 0x15)>>(8-5)
      else
        l_u8CrcRet = (l_u8CrcRet >> 1);
    }
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_5_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc5_itu_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-5/ITU parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-5/ITU           x5+x4+x2+1
*       Poly:    0x15
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc5_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc5Table_Reflect_True_Poly_0x15[l_u8Index];
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_5_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_USB_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc5_usb_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-5/USB parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-5/USB           x5+x2+1
*       Poly:    0x05
*       Init:    0x1F
*       Refin:   True
*       Refout:  True
*       Xorout:  0x1F
*
*************************************************************************/
unsigned char get_crc5_usb_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0x1F; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u8CrcRet & 1)
        l_u8CrcRet = (l_u8CrcRet >> 1) ^ 0x14; // 0x14 = (reverse 0x05)>>(8-5)
      else
        l_u8CrcRet = (l_u8CrcRet >> 1);
    }
  }
  return l_u8CrcRet ^ 0x1F;
}
#endif

#if (__CRC_5_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_USB_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc5_usb_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-5/USB parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-5/USB           x5+x2+1
*       Poly:    0x05
*       Init:    0x1F
*       Refin:   True
*       Refout:  True
*       Xorout:  0x1F
*
*************************************************************************/
unsigned char get_crc5_usb_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0x1F;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc5Table_Reflect_True_Poly_0x05[l_u8Index];
  }
  return l_u8CrcRet ^ 0x1F;
}
#endif

#if (__CRC_6_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_6_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc6_itu_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-6/ITU parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-6/ITU           x6+x+1
*       Poly:    0x03
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc6_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u8CrcRet & 1)
        l_u8CrcRet = (l_u8CrcRet >> 1) ^ 0x30; // 0x30 = (reverse 0x03)>>(8-6)
      else
        l_u8CrcRet = (l_u8CrcRet >> 1);
    }
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_6_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_6_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc6_itu_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-6/ITU parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-6/ITU           x6+x+1
*       Poly:    0x03
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc6_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc6Table_Reflect_True_Poly_0x03[l_u8Index];
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_7_MMC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_7_MMC_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc7_mmc_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-7/MMC parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-7/MMC           x7+x3+1
*       Poly:    0x09
*       Init:    0x00
*       Refin:   False
*       Refout:  False
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc7_mmc_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; l_u8Loop++)
    {
      if (l_u8CrcRet & 0x80)
        l_u8CrcRet = (l_u8CrcRet << 1) ^ 0x12; // 0x12 = 0x09<<(8-7)
      else
        l_u8CrcRet <<= 1;
    }
  }
  return l_u8CrcRet >> 1;
}
#endif

#if (__CRC_7_MMC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_7_MMC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc7_mmc_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-7/MMC parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-7/MMC           x7+x3+1
*       Poly:    0x09
*       Init:    0x00
*       Refin:   False
*       Refout:  False
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc7_mmc_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc7Table_Reflect_False_Poly_0x09[l_u8Index];
  }
  return l_u8CrcRet >> 1;
}
#endif

#if (__CRC_8_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-8 parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-8               x8+x2+x+1
*       Poly:    0x07
*       Init:    0x00
*       Refin:   False
*       Refout:  False
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc8_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; l_u8Loop++)
    {
      if (l_u8CrcRet & 0x80)
        l_u8CrcRet = (l_u8CrcRet << 1) ^ 0x07;
      else
        l_u8CrcRet <<= 1;
    }
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_8_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-8 parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-8               x8+x2+x+1
*       Poly:    0x07
*       Init:    0x00
*       Refin:   False
*       Refout:  False
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc8_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc8Table_Reflect_False_Poly_0x07[l_u8Index];
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_8_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_itu_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-8/ITU parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-8/ITU (CRC-8/ATM)           x8+x2+x+1
*       Poly:    0x07
*       Init:    0x00
*       Refin:   False
*       Refout:  False
*       Xorout:  0x55
*
*************************************************************************/
unsigned char get_crc8_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; l_u8Loop++)
    {
      if (l_u8CrcRet & 0x80)
        l_u8CrcRet = (l_u8CrcRet << 1) ^ 0x07;
      else
        l_u8CrcRet <<= 1;
    }
  }
  return l_u8CrcRet ^ 0x55;
}
#endif

#if (__CRC_8_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_itu_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-8/ITU parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-8/ITU (CRC-8/ATM)           x8+x2+x+1
*       Poly:    0x07
*       Init:    0x00
*       Refin:   False
*       Refout:  False
*       Xorout:  0x55
*
*************************************************************************/
unsigned char get_crc8_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc8Table_Reflect_False_Poly_0x07[l_u8Index];
  }
  return l_u8CrcRet ^ 0x55;
}
#endif

#if (__CRC_8_ROHC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ROHC_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_rohc_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-8/ROHC parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-8/ROHC          x8+x2+x+1
*       Poly:    0x07
*       Init:    0xFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc8_rohc_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0xFF; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u8CrcRet & 1)
        l_u8CrcRet = (l_u8CrcRet >> 1) ^ 0xE0; // 0xE0 = reverse 0x07
      else
        l_u8CrcRet = (l_u8CrcRet >> 1);
    }
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_8_ROHC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ROHC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_rohc_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-8/ROHC parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-8/ROHC          x8+x2+x+1
*       Poly:    0x07
*       Init:    0xFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc8_rohc_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0xFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc8Table_Reflect_True_Poly_0x07[l_u8Index];
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_8_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_MAXIM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_maxim_straightforward
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-8/MAXIM parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-8/MAXIM (DOW-CRC,CRC-8/IBUTTON)         x8+x5+x4+1
*       Poly:    0x31
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc8_maxim_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned char l_u8CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u8CrcRet ^= *l_pu8DataBuff++; // l_u8CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; l_u8Loop++)
    {
      if (l_u8CrcRet & 1)
        l_u8CrcRet = (l_u8CrcRet >> 1) ^ 0x8C; // 0x8C = reverse 0x31
      else
        l_u8CrcRet >>= 1;
    }
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_8_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_MAXIM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc8_maxim_table_driven
* Returned Value   : a value of unsigned char type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-8/MAXIM parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-8/MAXIM (DOW-CRC,CRC-8/IBUTTON)         x8+x5+x4+1
*       Poly:    0x31
*       Init:    0x00
*       Refin:   True
*       Refout:  True
*       Xorout:  0x00
*
*************************************************************************/
unsigned char get_crc8_maxim_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = l_u8CrcRet ^ (*l_pu8DataBuff++);
    l_u8CrcRet = cAr256_u8Crc8Table_Reflect_True_Poly_0x31[l_u8Index];
  }
  return l_u8CrcRet;
}
#endif

#if (__CRC_16_IBM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_IBM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_ibm_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/IBM parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/IBM (CRC-16,CRC-16/ARC,CRC-16/LHA)         x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_ibm_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0xA001; // 0xA001 = reverse 0x8005
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_IBM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_IBM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_ibm_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/IBM parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/IBM (CRC-16,CRC-16/ARC,CRC-16/LHA)         x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_ibm_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x8005[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MAXIM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_maxim_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/MAXIM parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/MAXIM        x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFF
*
*************************************************************************/
unsigned short get_crc16_maxim_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0xA001; // 0xA001 = reverse 0x8005
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return ~l_u16CrcRet; // l_u16CrcRet^0xffff
}
#endif

#if (__CRC_16_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MAXIM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_maxim_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/MAXIM parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/MAXIM        x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFF
*
*************************************************************************/
unsigned short get_crc16_maxim_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x8005[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return ~l_u16CrcRet;
}
#endif

#if (__CRC_16_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_USB_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_usb_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/USB parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/USB          x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0xFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFF
*
*************************************************************************/
unsigned short get_crc16_usb_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0xffff; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0xA001; // 0xA001 = reverse 0x8005
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return ~l_u16CrcRet; // l_u16CrcRet^0xffff
}
#endif

#if (__CRC_16_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_USB_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_usb_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/USB parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/USB          x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0xFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFF
*
*************************************************************************/
unsigned short get_crc16_usb_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0xFFFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x8005[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return ~l_u16CrcRet;
}
#endif

#if (__CRC_16_MODBUS_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MODBUS_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_modbus_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/MODBUS parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/MODBUS       x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0xFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_modbus_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0xffff; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0xA001; // 0xA001 = reverse 0x8005
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_MODBUS_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MODBUS_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_modbus_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/MODBUS parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/MODBUS       x16+x15+x2+1
*       Poly:    0x8005
*       Init:    0xFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_modbus_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0xFFFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x8005[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_CCITT_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_ccitt_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/CCITT parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/CCITT (CRC-CCITT,CRC-16/CCITT-TRUE,CRC-16/KERMIT)       x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_ccitt_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0x8408; // 0x8408 = reverse 0x1021
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_CCITT_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_ccitt_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/CCITT parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/CCITT (CRC-CCITT,CRC-16/CCITT-TRUE,CRC-16/KERMIT)       x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_ccitt_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x1021[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_CCITT_FALSE_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_FALSE_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_ccitt_false_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/CCITT-FALSE parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/CCITT-FALSE   x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0xFFFF
*       Refin:   False
*       Refout:  False
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_ccitt_false_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0xffff; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= (unsigned short)(*l_pu8DataBuff++) << 8; // l_u16CrcRet ^= (unsigned short)(*l_pu8DataBuff)<<8; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 0x8000)
        l_u16CrcRet = (l_u16CrcRet << 1) ^ 0x1021;
      else
        l_u16CrcRet <<= 1;
    }
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_CCITT_FALSE_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_FALSE_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_ccitt_false_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/CCITT-FALSE parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/CCITT-FALSE   x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0xFFFF
*       Refin:   False
*       Refout:  False
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_ccitt_false_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0xFFFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet >> 8) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_False_Poly_0x1021[l_u8Index] ^ (l_u16CrcRet << 8);
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_X25_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_X25_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_x25_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/X25 parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/X25          x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0xFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0XFFFF
*
*************************************************************************/
unsigned short get_crc16_x25_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0xffff; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0x8408; // 0x8408 = reverse 0x1021
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return ~l_u16CrcRet; // l_u16CrcRet^Xorout
}
#endif

#if (__CRC_16_X25_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_X25_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_x25_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/X25 parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/X25          x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0xFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0XFFFF
*
*************************************************************************/
unsigned short get_crc16_x25_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0xFFFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x1021[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return ~l_u16CrcRet;
}
#endif

#if (__CRC_16_XMODEM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_XMODEM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_xmodem_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/XMODEM parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/XMODEM (CRC-16/ZMODEM,CRC-16/ACORN)      x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0x0000
*       Refin:   False
*       Refout:  False
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_xmodem_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= (unsigned short)(*l_pu8DataBuff++) << 8; // l_u16CrcRet ^= (unsigned short)(*l_pu8DataBuff)<<8; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 0x8000)
        l_u16CrcRet = (l_u16CrcRet << 1) ^ 0x1021;
      else
        l_u16CrcRet <<= 1;
    }
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_XMODEM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_XMODEM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_xmodem_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/XMODEM parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/XMODEM (CRC-16/ZMODEM,CRC-16/ACORN)      x16+x12+x5+1
*       Poly:    0x1021
*       Init:    0x0000
*       Refin:   False
*       Refout:  False
*       Xorout:  0x0000
*
*************************************************************************/
unsigned short get_crc16_xmodem_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet >> 8) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_False_Poly_0x1021[l_u8Index] ^ (l_u16CrcRet << 8);
  }
  return l_u16CrcRet;
}
#endif

#if (__CRC_16_DNP_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_DNP_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_dnp_straightforward
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-16/DNP parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-16/DNP          x16+x13+x12+x11+x10+x8+x6+x5+x2+1
*       Poly:    0x3D65
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFF
*
*************************************************************************/
unsigned short get_crc16_dnp_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned short l_u16CrcRet = 0; // Initial value
  while (l_sizeDataLength--)
  {
    l_u16CrcRet ^= *l_pu8DataBuff++; // l_u16CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u16CrcRet & 1)
        l_u16CrcRet = (l_u16CrcRet >> 1) ^ 0xA6BC; // 0xA6BC = reverse 0x3D65
      else
        l_u16CrcRet = (l_u16CrcRet >> 1);
    }
  }
  return ~l_u16CrcRet; // l_u16CrcRet^Xorout
}
#endif

#if (__CRC_16_DNP_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_DNP_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc16_dnp_table_driven
* Returned Value   : a value of unsigned short type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-16/DNP parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-16/DNP          x16+x13+x12+x11+x10+x8+x6+x5+x2+1
*       Poly:    0x3D65
*       Init:    0x0000
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFF
*
*************************************************************************/
unsigned short get_crc16_dnp_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16CrcRet = 0;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u16CrcRet & 0xFF) ^ (*l_pu8DataBuff++));
    l_u16CrcRet = cAr256_u16Crc16Table_Reflect_True_Poly_0x3d65[l_u8Index] ^ ((l_u16CrcRet >> 8) & 0xFF);
  }
  return ~l_u16CrcRet;
}
#endif

#if (__CRC_32_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc32_straightforward
* Returned Value   : a value of unsigned int type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-32 parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-32 (CRC_32/ADCCP) x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1
*       Poly:    0x4C11DB7
*       Init:    0xFFFFFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFFFFFF
*
*************************************************************************/
unsigned int get_crc32_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned int l_u32CrcRet = 0xffffffff; // Initial value
  while (l_sizeDataLength--)
  {
    l_u32CrcRet ^= *l_pu8DataBuff++; // l_u32CrcRet ^= *l_pu8DataBuff; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u32CrcRet & 1)
        l_u32CrcRet = (l_u32CrcRet >> 1) ^ 0xEDB88320; // 0xEDB88320= reverse 0x04C11DB7
      else
        l_u32CrcRet = (l_u32CrcRet >> 1);
    }
  }
  return ~l_u32CrcRet;
}
#endif

#if (__CRC_32_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc32_table_driven
* Returned Value   : a value of unsigned int type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-32 parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-32 (CRC_32/ADCCP) x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1
*       Poly:    0x4C11DB7
*       Init:    0xFFFFFFFF
*       Refin:   True
*       Refout:  True
*       Xorout:  0xFFFFFFFF
*
*************************************************************************/
unsigned int get_crc32_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned int l_u32CrcRet = 0xFFFFFFFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u32CrcRet ^ (*l_pu8DataBuff++)) & 0xFF);
    l_u32CrcRet = cAr256_u32Crc32Table_Reflect_True_Poly_0x04c11db7[l_u8Index] ^ (l_u32CrcRet >> 8);
  }
  return ~l_u32CrcRet;
}
#endif

#if (__CRC_32_MPEG_2_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_MPEG_2_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc32_mpeg_2_straightforward
* Returned Value   : a value of unsigned int type
* Comments         :
*    this function is used to generate CRC-check values straightforwardly
*    in the CRC-32/MPEG-2 parametric model, The following list summarizes the
*    specific features of the parametric model:
*       Name:    CRC-32/MPEG-2  x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1
*       Poly:    0x4C11DB7
*       Init:    0xFFFFFFFF
*       Refin:   False
*       Refout:  False
*       Xorout:  0x0000000
*
*************************************************************************/
unsigned int get_crc32_mpeg_2_straightforward(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8Loop;
  unsigned int l_u32CrcRet = 0xffffffff; // Initial value
  while (l_sizeDataLength--)
  {
    l_u32CrcRet ^= (unsigned int)(*l_pu8DataBuff++) << 24; // l_u32CrcRet ^=(unsigned int)(*l_pu8DataBuff)<<24; l_pu8DataBuff++;
    for (l_u8Loop = 0; l_u8Loop < 8; ++l_u8Loop)
    {
      if (l_u32CrcRet & 0x80000000)
        l_u32CrcRet = (l_u32CrcRet << 1) ^ 0x04C11DB7;
      else
        l_u32CrcRet <<= 1;
    }
  }
  return l_u32CrcRet;
}
#endif

#if (__CRC_32_MPEG_2_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_MPEG_2_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
/*FUNCTION*-----------------------------------------------------
*
* Function Name    : get_crc32_mpeg_2_table_driven
* Returned Value   : a value of unsigned int type
* Comments         :
*    this function is used to generate CRC-check values of the
*    CRC-32/MPEG-2 parametric model by lookup tables, The following
*    list summarizes the specific features of the parametric model:
*       Name:    CRC-32/MPEG-2  x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1
*       Poly:    0x4C11DB7
*       Init:    0xFFFFFFFF
*       Refin:   False
*       Refout:  False
*       Xorout:  0x0000000
*
*************************************************************************/
unsigned int get_crc32_mpeg_2_table_driven(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned int l_u32CrcRet = 0xFFFFFFFF;
  unsigned char l_u8Index;
  while (l_sizeDataLength--)
  {
    l_u8Index = (unsigned char)((l_u32CrcRet >> 24) ^ (*l_pu8DataBuff++));
    l_u32CrcRet = cAr256_u32Crc32Table_Reflect_False_Poly_0x04c11db7[l_u8Index] ^ (l_u32CrcRet << 8);
  }
  return l_u32CrcRet;
}
#endif

#if (__SUM_CHECK_8_ENABLE_STATUS == CHECK_ENABLE)
/*FUNCTION****************************************************************
*
* Function Name    : get_sumc8
* Returned Value   : a value of unsigned char type
* Comments         :
*   get the sum check of the data
*
*************************************************************************/
unsigned char get_sumc8(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned char l_u8SumRet = 0;
  while (l_sizeDataLength--)
  {
    l_u8SumRet += *l_pu8DataBuff++;
  }
  return l_u8SumRet;
}
#endif

#if (__SUM_CHECK_16_ENABLE_STATUS == CHECK_ENABLE)
/*FUNCTION****************************************************************
*
* Function Name    : get_sumc16
* Returned Value   : a value of unsigned short type
* Comments         :
*   get the sum check of the data
*
*************************************************************************/
unsigned short get_sumc16(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned short l_u16SumRet = 0;
  while (l_sizeDataLength--)
  {
    l_u16SumRet += *l_pu8DataBuff++;
  }
  return l_u16SumRet;
}
#endif

#if (__SUM_CHECK_32_ENABLE_STATUS == CHECK_ENABLE)
/*FUNCTION****************************************************************
*
* Function Name    : get_sumc32
* Returned Value   : a value of unsigned int type
* Comments         :
*   get the sum check of the data
*
*************************************************************************/
unsigned int get_sumc32(unsigned char* l_pu8DataBuff, size_t l_sizeDataLength)
{
  unsigned int l_u32SumRet = 0;
  while (l_sizeDataLength--)
  {
    l_u32SumRet += *l_pu8DataBuff++;
  }
  return l_u32SumRet;
}
#endif

