#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_integer - check if a string represents a positive integer
 *
 * @str: input string
 *
 * Return: 1 if it's a positive integer, 0 otherwise
 */
int is_positive_integer(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}

	return (1);
}

/**
 * main - a program that multiplies two positive numbers.
 *
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	else
	{
		if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
		{
			printf("Error\n");
			return (98);
		}

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ans = num1 * num2;
		printf("%d\n", ans);
		return (0);
	}
}
