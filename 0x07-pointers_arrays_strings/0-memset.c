#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: input
 * @b: constant byte
 * @n: input
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}

	return (s);
}
