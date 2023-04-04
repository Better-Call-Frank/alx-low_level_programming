#include "main.h"
/**
 * _strstr - Finds first occurence of substring needle
 * @haystack: the string
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *f = haystack;
		char *s = needle;

		while (*f == *s && *s != '\0')
		{
			f++;
			s++;
		}

		if (*s == '\0')
			return (haystack);
	}

	return (0);
}
