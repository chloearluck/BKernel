#ifndef UNICORNSPIFLASH
#define UNICORNSPIFLASH

#define SPI_FLASH_CONTROL_SECTOR_POS            0
#define SPI_FLASH_CONTROL_SECTOR_MASK           (0x3FF<<SPI_FLASH_CONTROL_SECTOR_POS)

#define SPI_FLASH_CONTROL_START_CMD_POS         11
#define SPI_FLASH_CONTROL_START_CMD_MASK        (1<<SPI_FLASH_CONTROL_START_CMD_POS)
#define SPI_FLASH_CONTROL_START_CMD_IDLE        0x00
#define SPI_FLASH_CONTROL_START_CMD_START       0x01

#define SPI_FLASH_CONTROL_RNW_CMD_POS           12
#define SPI_FLASH_CONTROL_RNW_CMD_MASK          (1<<SPI_FLASH_CONTROL_START_CMD_POS)
#define SPI_FLASH_CONTROL_RNW_CMD_READ          0x00
#define SPI_FLASH_CONTROL_RNW_CMD_WRITE         0x01

#define SPI_FLASH_CONTROL_DATA_LENGTH_POS       13
#define SPI_FLASH_CONTROL_DATA_LENGTH_MASK      (0xF<<SPI_FLASH_CONTROL_DATA_LENGTH_POS)

#define SPI_FLASH_CONTROL_ADDR_LENGTH_POS       17
#define SPI_FLASH_CONTROL_ADDR_LENGTH_MASK      (0xF<<SPI_FLASH_CONTROL_ADDR_LENGTH_POS)

#define SPI_FLASH_CONTROL_ID_CODE_POS           21
#define SPI_FLASH_CONTROL_ID_CODE_MASK          (0xFF<<SPI_FLASH_CONTROL_SECTOR_POS)


#endif
