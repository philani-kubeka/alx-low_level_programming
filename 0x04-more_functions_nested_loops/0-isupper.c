#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: An input character
 *
 * Return: Always 0.
*/
int _isupper(int c)
{
	char i;
	int upper;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			upper = 1;
			break;
		}
		else
		{
			upper = 0;
			break;
		}
	}

	return (upper);
}
