#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: integer
 * @index: index
 *
 * Return: returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
