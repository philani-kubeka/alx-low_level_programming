#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints 0 to 14.
 * 10 times.
 *
 * Return: Always 0.
*/
void more_numbers(void)
{
	int num, j;

	for (num = 0; num < 10; num++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

