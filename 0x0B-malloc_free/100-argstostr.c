#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments passed to the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: pointer to a new string containing all arguments concatenated
 *         or NULL if ac == 0, av == NULL or upon failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* account for space between words */
	}

	str = malloc(sizeof(char) * (len + 1)); /* +1 for null terminator */
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* add newline between arguments */
		k++;
	}
	str[k] = '\0'; /* add null terminator */

	return (str);
}
