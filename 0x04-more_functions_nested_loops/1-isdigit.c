#include "main.h"

/**
 * main - checks for a digit 0 through 9
 * @c: The character to be checked
 * Return: 1 if it is a digit or 0 if otherwise
 */
int _isdigit(int c);
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
