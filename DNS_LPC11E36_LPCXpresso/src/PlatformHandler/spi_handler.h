#ifndef __SSP_H__
#define __SSP_H__

#define GPIO_SPI0_PORT		0
#define GPIO_W5500_RST_PORT	0

#define GPIO_SPI0_CS		2
#define GPIO_SPI0_CLK		6		
#define GPIO_SPI0_MISO		8
#define GPIO_SPI0_MOSI		9
#define GPIO_W5500_RST		3

void SPI_Init();

#endif
