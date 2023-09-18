#include "main.h"
/**
 * puts_half - Prints second half of string.
 * @str: input value.
 *
 * Return: Always 0.
*/
void puts_half(char *str)
{
	int i, n, len;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;

	for (len = n; len < i; len++)
		_putchar(str[len]);
	_putchar('\n');
}
