#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints alphabet.
 *
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
