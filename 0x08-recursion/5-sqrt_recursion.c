#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: input
 * Return: returns the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)

{
	int sqrt_help(int n, int sr);

	int sr = 1;

	return (sqrt_help(n, sr));
}

/**
 * sqrt_help - helper function to _sqrt_recursion
 *
 * @sr: square root
 * @n: input number
 * Return: square root or -1
 */
int sqrt_help(int n, int sr)
{
	if (n == sr * sr)
	{
		return (sr);
	}
	else if (sr < n)
	{
		return (sqrt_help(n, ++sr));
	}
	else
	{
		return (-1);
	}
}
