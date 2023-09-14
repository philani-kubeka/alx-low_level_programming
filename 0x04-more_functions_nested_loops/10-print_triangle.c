#include "main.h"
/**
 * print_triangle - prints triangle using '#'
 * @size: input character.
 *
 * Return: Always 0.
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
