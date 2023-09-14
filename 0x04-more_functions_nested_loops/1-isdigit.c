#include "main.h"
/**
 * _isdigit - function that checks for number character.
 * @c: An input character
 *
 * Return: Always 0.
*/
int _isdigit(int c)
{
	char i;
	int digit;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			digit = 1;
			break;
		}
		else
		{
			digit = 0;
			break;
		}
	}
	return (digit);
}
