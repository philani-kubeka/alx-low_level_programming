#include <stdio.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @r: input character
 *
 * Return: Always 0.
*/
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
