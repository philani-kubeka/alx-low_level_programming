#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints 0 to 9.
 *
 *
 * Return: Always 0.
*/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}
