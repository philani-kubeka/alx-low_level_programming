#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints alphabet.
 *
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
	return (0);
}
