#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argv: argument value
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
