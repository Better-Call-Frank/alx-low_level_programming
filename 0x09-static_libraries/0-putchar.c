#include <unistd.h>

/**
 * _putchar - output single character to console
 * @c: character to output
 *
 * Return: 1 on success
 * On error, return -1, and set errno appropriately
 */
int _putchar(char c)
{
	return (rite(1, &c, 1));
}
