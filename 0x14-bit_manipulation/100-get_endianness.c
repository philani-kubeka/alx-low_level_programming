#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 1 if big or 0 if smol
 */
int get_endianness(void)
{
	int i = 1;
	char *endia = (char *)&i;

	if (*endia == 1)
	{
		return (1);
	}
	return (0);
}
