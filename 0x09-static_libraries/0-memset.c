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
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return s;
}
