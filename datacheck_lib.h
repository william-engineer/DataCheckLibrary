/*******************************************************************
** Project Name : ---                                             **
********************************************************************
** File Name    :    datacheck_lib.h                               **
**                                                                **
** Version      :    V1.00                                        **
**                                                                **
** Created By   :  	 WilliamChen                                  **
**                                                                **
** Create Date  :    2022-08-09                                   **
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
** Description  : this file is used with datacheck_lib.c.
*******************************************************************/
#ifndef __DATACHECK_LIB_H__
#define __DATACHECK_LIB_H__
#include <string.h>
/****************************************************************
Tip: To avoid modifying the following define
*****************************************************************/
#define CHECK_DISABLE 0
#define CHECK_ENABLE 1
#define CRC_STRAIGHTFORWARD_CALC_WAY 0
#define CRC_TABLE_DRIVEN_CALC_WAY 1

/****************************************************************
Tip: Enable or disable a function of data check what you need
by define __XXX_ENABLE_STATUS enable or disable. Especially, if
you enable a kind of crc parametric models, you should indicate
the way of CRC calculation: CRC_STRAIGHTFORWARD_CALC_WAY or
CRC_TABLE_DRIVEN_CALC_WAY
*****************************************************************/
#define __CRC_4_ITU_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_4_ITU_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_4_ITU_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_5_EPC_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_5_EPC_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_5_EPC_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_5_ITU_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_5_ITU_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_5_ITU_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_5_USB_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_5_USB_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_5_USB_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_6_ITU_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_6_ITU_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_6_ITU_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_7_MMC_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_7_MMC_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_7_MMC_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_8_ENABLE_STATUS              CHECK_DISABLE
#if __CRC_8_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_8_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_8_ITU_ENABLE_STATUS          CHECK_DISABLE
#if __CRC_8_ITU_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_8_ITU_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_8_ROHC_ENABLE_STATUS         CHECK_DISABLE
#if __CRC_8_ROHC_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_8_ROHC_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_8_MAXIM_ENABLE_STATUS        CHECK_DISABLE
#if __CRC_8_MAXIM_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_8_MAXIM_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_IBM_ENABLE_STATUS         CHECK_DISABLE
#if __CRC_16_IBM_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_IBM_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_MAXIM_ENABLE_STATUS       CHECK_DISABLE
#if __CRC_16_MAXIM_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_MAXIM_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_USB_ENABLE_STATUS         CHECK_DISABLE
#if __CRC_16_USB_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_USB_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_MODBUS_ENABLE_STATUS      CHECK_ENABLE
#if __CRC_16_MODBUS_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_MODBUS_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_CCITT_ENABLE_STATUS       CHECK_DISABLE
#if __CRC_16_CCITT_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_CCITT_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_CCITT_FALSE_ENABLE_STATUS CHECK_DISABLE
#if __CRC_16_CCITT_FALSE_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_CCITT_FALSE_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_X25_ENABLE_STATUS         CHECK_DISABLE
#if __CRC_16_X25_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_X25_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_XMODEM_ENABLE_STATUS      CHECK_DISABLE
#if __CRC_16_XMODEM_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_XMODEM_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_16_DNP_ENABLE_STATUS         CHECK_DISABLE
#if __CRC_16_DNP_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_16_DNP_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_32_ENABLE_STATUS             CHECK_DISABLE
#if __CRC_32_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_32_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __CRC_32_MPEG_2_ENABLE_STATUS      CHECK_DISABLE
#if __CRC_32_MPEG_2_ENABLE_STATUS == CHECK_ENABLE
#define __CRC_32_MPEG_2_CALC_WAY CRC_STRAIGHTFORWARD_CALC_WAY
#endif

#define __SUM_CHECK_8_ENABLE_STATUS        CHECK_DISABLE
#define __SUM_CHECK_16_ENABLE_STATUS       CHECK_DISABLE
#define __SUM_CHECK_32_ENABLE_STATUS       CHECK_DISABLE

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
unsigned char get_crc4_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc4_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc5_epc_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc5_epc_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc5_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc5_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc5_usb_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc5_usb_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc6_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc6_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc7_mmc_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc7_mmc_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_itu_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_itu_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_rohc_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_rohc_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_maxim_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_crc8_maxim_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_ibm_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_ibm_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_maxim_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_maxim_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_usb_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_usb_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_modbus_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_modbus_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_ccitt_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_ccitt_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_ccitt_false_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_ccitt_false_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_x25_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_x25_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_xmodem_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_xmodem_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_dnp_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_crc16_dnp_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned int get_crc32_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned int get_crc32_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned int get_crc32_mpeg_2_straightforward(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned int get_crc32_mpeg_2_table_driven(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned char get_sumc8(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned short get_sumc16(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
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
unsigned int get_sumc32(unsigned char* l_pu8DataBuff, size_t l_xDataLength);
#endif

#endif