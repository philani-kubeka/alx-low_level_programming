#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: input
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int counter;

	if (*s == '\0')
		return (0);

	counter = 1 + _strlen_recursion(s + 1);
	return (counter);
}
