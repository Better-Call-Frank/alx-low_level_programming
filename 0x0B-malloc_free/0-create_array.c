#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size 'size' and initializes all elements
 * to the character 'c'.
 *
 * @size: The size of the array to be created.
 * @c: The character to initialize all elements of the array with.
 *
 * Return: On success, a pointer to the newly created array. On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
