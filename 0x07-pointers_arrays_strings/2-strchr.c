#include "main.h"
/**
 * _strchr - Locates character in a string
 * @s: the string
 * @c: the character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
