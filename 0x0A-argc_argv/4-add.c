#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argv: argument value
 * @argc: argument count
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int num, ans = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		ans += num;
	}
	printf("%d\n", ans);
	return (0);
}
