#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that checks for uppercase character.
 * @c: input character
 *
 * Return: Always 0.
*/
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
