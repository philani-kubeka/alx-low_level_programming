#include "main.h"
/**
 * print_diagonal - Prints sraight line.
 * @n: input value.
 *
 * Return: Always 0.
*/
void print_diagonal(int n)
{
	int space, num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (space = 0; space < num; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (num == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
