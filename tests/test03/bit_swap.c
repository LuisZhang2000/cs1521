// swap pairs of bits of a 64-bit value, using bitwise operators

#include <assert.h>
#include <stdint.h>
#include <stdlib.h>

// return value with pairs of bits swapped
uint64_t bit_swap(uint64_t value) {

	uint64_t new1 = (value & 0xAAAAAAAAAAAAAAAA) >> 1;
	uint64_t new2 = (value & 0x5555555555555555) << 1;
	
	uint64_t new = new1 | new2;
	
    return new;
}
