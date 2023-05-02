#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name using pointer to function
 * @name: string to print
 * @f: pointer to function that prints a string
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
