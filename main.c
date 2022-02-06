#include <stdio.h>
#include "DataCheckLib.h"
#define CRC_ORIGINAL_DATA 10

void main(void)
{
	unsigned char lArM_u8CrcOriginalData[CRC_ORIGINAL_DATA] = {
		0x11,0x12,0x13,0x14,0x15,
		0x32,0x33,0x34,0x35,0x36
	};

#if (__CRC_4_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_4_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc4_itu_straightforward = %02x\r\n", get_crc4_itu_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_4_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_4_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc4_itu_table_driven = %02x\r\n", get_crc4_itu_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_5_EPC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_EPC_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc5_epc_straightforward = %02x\r\n", get_crc5_epc_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_5_EPC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_EPC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc5_epc_table_driven = %02x\r\n", get_crc5_epc_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_5_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc5_itu_straightforward = %02x\r\n", get_crc5_itu_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_5_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc5_itu_table_driven = %02x\r\n", get_crc5_itu_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_5_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_USB_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc5_usb_straightforward = %02x\r\n", get_crc5_usb_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_5_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_5_USB_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc5_usb_table_driven = %02x\r\n", get_crc5_usb_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_6_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_6_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc6_itu_straightforward = %02x\r\n", get_crc6_itu_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_6_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_6_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc6_itu_table_driven = %02x\r\n", get_crc6_itu_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_7_MMC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_7_MMC_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc7_mmc_straightforward = %02x\r\n", get_crc7_mmc_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_7_MMC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_7_MMC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc7_mmc_table_driven = %02x\r\n", get_crc7_mmc_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_8_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc8_straightforward = %02x\r\n", get_crc8_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_8_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc8_table_driven = %02x\r\n", get_crc8_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_8_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ITU_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc8_itu_straightforward = %02x\r\n", get_crc8_itu_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_8_ITU_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ITU_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc8_itu_table_driven = %02x\r\n", get_crc8_itu_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_8_ROHC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ROHC_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc8_rohc_straightforward = %02x\r\n", get_crc8_rohc_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_8_ROHC_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_ROHC_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc8_rohc_table_driven = %02x\r\n", get_crc8_rohc_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_8_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_MAXIM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc8_maxim_straightforward = %02x\r\n", get_crc8_maxim_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_8_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_8_MAXIM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc8_maxim_table_driven = %02x\r\n", get_crc8_maxim_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_IBM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_IBM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_ibm_straightforward = %04x\r\n", get_crc16_ibm_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_IBM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_IBM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_ibm_table_driven = %04x\r\n", get_crc16_ibm_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MAXIM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_maxim_straightforward = %04x\r\n", get_crc16_maxim_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_MAXIM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MAXIM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_maxim_table_driven = %04x\r\n", get_crc16_maxim_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_USB_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_usb_straightforward = %04x\r\n", get_crc16_usb_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_USB_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_USB_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_usb_table_driven = %04x\r\n", get_crc16_usb_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_MODBUS_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MODBUS_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_modbus_straightforward = %04x\r\n", get_crc16_modbus_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_MODBUS_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_MODBUS_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_modbus_table_driven = %04x\r\n", get_crc16_modbus_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_CCITT_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_ccitt_straightforward = %04x\r\n", get_crc16_ccitt_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_CCITT_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_ccitt_table_driven = %04x\r\n", get_crc16_ccitt_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_CCITT_FALSE_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_FALSE_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_ccitt_false_straightforward = %04x\r\n", get_crc16_ccitt_false_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_CCITT_FALSE_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_CCITT_FALSE_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_ccitt_false_table_driven = %04x\r\n", get_crc16_ccitt_false_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_X25_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_X25_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_x25_straightforward = %04x\r\n", get_crc16_x25_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_X25_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_X25_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_x25_table_driven = %04x\r\n", get_crc16_x25_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_XMODEM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_XMODEM_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_xmodem_straightforward = %04x\r\n", get_crc16_xmodem_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_XMODEM_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_XMODEM_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_xmodem_table_driven = %04x\r\n", get_crc16_xmodem_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_16_DNP_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_DNP_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc16_dnp_straightforward = %04x\r\n", get_crc16_dnp_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_16_DNP_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_16_DNP_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc16_dnp_table_driven = %04x\r\n", get_crc16_dnp_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_32_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc32_straightforward = %08x\r\n", get_crc32_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_32_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc32_table_driven = %08x\r\n", get_crc32_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif
	printf("\r\n");

#if (__CRC_32_MPEG_2_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_MPEG_2_CALC_WAY == CRC_STRAIGHTFORWARD_CALC_WAY)
	printf("get_crc32_mpeg_2_straightforward = %08x\r\n", get_crc32_mpeg_2_straightforward(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

#if (__CRC_32_MPEG_2_ENABLE_STATUS == CHECK_ENABLE) && (__CRC_32_MPEG_2_CALC_WAY == CRC_TABLE_DRIVEN_CALC_WAY)
	printf("get_crc32_mpeg_2_table_driven = %08x\r\n", get_crc32_mpeg_2_table_driven(lArM_u8CrcOriginalData, CRC_ORIGINAL_DATA));
#endif

}