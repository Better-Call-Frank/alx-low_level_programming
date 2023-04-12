#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup - Duplicates a string to a new memory space location.
 *
 * @str: The string to be duplicated.
 *
 * Return: On success, a pointer to the newly created string. On failure, NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
