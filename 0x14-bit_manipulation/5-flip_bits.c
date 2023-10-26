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
	unsigned int flips = 0;
	unsigned long int exc_or = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= exc_or)
	{
		if (max & exc_or)
			flips++;
		max <<= 1;
	}
	return (flips);
}
