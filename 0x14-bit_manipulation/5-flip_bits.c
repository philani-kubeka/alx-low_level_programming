#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: integer
 * @m: integer
 *
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = 0;
	unsigned long int exc_or = n ^ m;

	while (exc_or > 0)
	{
		flips += (exc_or & 1);
		exc_or >>= 1;
	}
	return (flips);
}
