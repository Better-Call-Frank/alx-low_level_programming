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
	/* Ignore the argv parameter */
	(void) argv;

	/* Print the number of arguments passed to the program */
	printf("The program was passed %d arguments.\n", argc - 1);

	return (0);
}
