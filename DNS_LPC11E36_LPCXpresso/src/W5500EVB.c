/*
===============================================================================
 Name        : W5500EVB.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include "spi_handler.h"
#include "w5500_init.h"
#include "common.h"
#include "dns.h"

#include <cr_section_macros.h>

// TODO: insert other include files here

// TODO: insert other definitions and declarations here

////////////////////////////////////////////////
// Shared Buffer Definition for LOOPBACK TEST //
////////////////////////////////////////////////

uint8_t gDATABUF[DATA_BUF_SIZE];

int main(void) {
	uint8_t dns_ip[4] = {8, 8, 8, 8};
	char *domain = "www.google.com";
	uint8_t ip_from_dns[4];

#if defined (__USE_LPCOPEN)
#if !defined(NO_BOARD_LIB)
    // Read clock settings and update SystemCoreClock variable
    SystemCoreClockUpdate();
    // Set up and initialize all required blocks and
    // functions related to the board hardware
    Board_Init();
    // Set the LED to the state of "On"
    Board_LED_Set(0, true);
    Board_LED_Set(1, true);
    Board_LED_Set(2, true);
#endif
#endif

#if 0
    // TODO: insert code here

    // Force the counter to be placed into memory
    volatile static int i = 0 ;
    // Enter an infinite loop, just incrementing a counter
    while(1) {
        i++ ;
    }
#else
	SPI_Init();
	W5500_Init();
	Net_Conf();

	DNS_init(0, gDATABUF);
	DNS_run(dns_ip, (uint8_t *)domain, ip_from_dns);

	while(1) {
	}
#endif
    return 0 ;
}
