#include "main.h"
/**
 * _strpbrk - Searches string for set of bytes
 * @s: the string
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int f;

		while (*s)
		{
			for (f = 0; accept[f]; f++)
			{
			if (*s == accept[f])
			return (s);
			}
		s++;
		}

	return ('\0');
}
