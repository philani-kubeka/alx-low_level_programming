#include "main.h"
/**
 * rev_string - Prints reverse string.
 * @s: input value.
 *
 * Return: Always 0.
*/

void rev_string(char *s)
{
	int i, rs = 0;
	char str;

	for (i = '\0'; s[i] != 0; i++)
	{
	}
	for (i = i - 1; rs < i; rs++)
	{
		str = s[i];
		s[i] = s[rs];
		s[rs] = str;
		i--;
	}
}
