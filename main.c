#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const uint8_t LineCodetable[16] = {0x55, 0x56, 0x59, 0x5A, 
				   0x65, 0x66, 0x69, 0x6A,
				   0x95, 0x96, 0x99, 0x9A,
				   0xA5, 0xA6, 0xA9, 0xAA};

void main()
{
	uint8_t i;

	for (i = 0; i < 10; ++i) {
		printf("MCE of %C = 0x%02X\n", ('0' + i), LineCodetable[i]);
	}

	for (i = 0; i < 6; ++i) {
		printf("MCE of %C = 0x%02X\n", ('A' + i), LineCodetable[10 + i]);
	}

	return;

}
