#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string contains only digits
 * @str: string to be checked
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count])) /* Check if character is not a digit */
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - sums all arguments that contain digits
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int count, str_to_int, sum = 0;

	for (count = 1; count < argc; count++) /* Iterate through all arguments */
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* Convert string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n"); /* If an argument is not a number, print error message */
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
