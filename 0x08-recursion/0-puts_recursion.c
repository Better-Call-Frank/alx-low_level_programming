#include "main.h"

/**
 * _puts_recursion - Prints string followed by new line
 * @s: Input
 * Return: Alwaays 0 (Success)
 */
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}

	else 
		_putchar('\n');
}
