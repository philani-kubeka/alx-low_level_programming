#include "main.h"
/**
 * print_line - Prints sraight line.
 * @n: inpput value.
 *
 * Return: Always 0.
*/
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
