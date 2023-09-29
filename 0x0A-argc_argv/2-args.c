#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 *
 * @argv: argument value
 * @argc: argument count
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
