#include "main.h"

/**
 * flip_bits - Re the nub of bits u'd need2flip2get1numb2another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result > 0)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_count);
}
