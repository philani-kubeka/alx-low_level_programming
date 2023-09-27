#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: input
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int prime_help(int div, int n);

	int div = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_help(div, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_help - helper to is_prime_number
 *
 * @n: input
 * @div: input
 * Return: 0 if not prime, 1 if prime
 */
int prime_help(int div, int n)
{
	if (div < n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			++div;
			return (prime_help(div, n));
		}
	}
	else
	{
		return (1);
	}
}
