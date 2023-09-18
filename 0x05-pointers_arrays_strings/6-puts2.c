#include "main.h"
/**
 * puts2 - Prints # square.
 * @str: input value.
 *
 * Return: Always 0.
*/

void puts2(char *str)
{
	int i;
	char p;

	for (i = 0; str[i] != 0; i++)
		if (i % 2 == 0)
		{
			p = str[i];
			_putchar(p);
		}
	_putchar('\n');
}
