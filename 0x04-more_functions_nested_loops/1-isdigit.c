#include "main.h"
/**
 * _isdigit - function that checks for number character.
 * @c: An input character
 *
 * Return: Always 0.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
