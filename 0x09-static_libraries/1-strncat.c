#include "main.h"
/**
 * _strncat - concatenate at most n bytes of two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to be concatenated
 *
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
