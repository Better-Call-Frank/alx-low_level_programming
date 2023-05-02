#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	/* Loop through all arguments and print them */
	for (i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return (0);
}
