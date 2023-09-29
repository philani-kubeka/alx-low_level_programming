#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argv: argument value
 * @argc: argument count
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		ans = num1 * num2;
		printf("%d\n", ans);
		return (0);
	}
}
