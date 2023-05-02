#include "main.h"

/**
 * _memset - fills a block of memory with a specified value
 *
 * @s: pointer to the start of the memory block to be filled
 * @b: the value to fill the memory block with
 * @n: number of bytes to fill
 *
 * Return: pointer to the start of the filled memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
