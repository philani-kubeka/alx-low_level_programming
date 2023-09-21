#include "main.h"
/**
 * leet -  function that encodes a string into 1337.
 *
 * @n: input value.
 * Return: Always 0.
 */
char *leet(char *n)
{
	int i, j = 0;

	char lcase[] = "aeotl";
	char ucase[] = "AEOTL";
	char repl[] = "43071";

	while (*n != 0)
	{
		for (i = 0; i <= 4; i++)
		{
			if (*n == lcase[i] || *n == ucase[i])
				*n = repl[i];

		}
		n++;
		j++;
	}
	n -= j;
	return (n);
}
