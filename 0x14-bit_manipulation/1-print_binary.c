#include "main.h"

/**
 * print_binary - Prints binary equivalent of decimal number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask = 1UL << 63;

	for (i = 0; i < 64; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

		mask >>= 1;
	}

	if (!count)
		_putchar('0');
}
