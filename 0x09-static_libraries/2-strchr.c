#include "main.h
#include <stddef.h>

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: pointer to the string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character in the string
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
