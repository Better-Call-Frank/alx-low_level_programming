#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string, or 0 if no valid integer found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		result = result * 10 + s[i] - '0';
	}

	return (sign * result);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error: Usage %s <num1> <num2>\n", argv[0]);
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error: Invalid input\n");
		return (1);
	}

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

