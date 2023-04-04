#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: starting address of the memory to be filled
 * @n: number of bytes to be changed
 * @b: constant byte
 * 
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
