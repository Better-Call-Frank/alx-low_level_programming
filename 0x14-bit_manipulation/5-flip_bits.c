#include "main.h"

/**
 * flip_bits - Counts number of bits to change
 * to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			count++;
		xor_result >>= 1;
	}

	return (count);
}
