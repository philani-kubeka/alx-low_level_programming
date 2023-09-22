#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string input
 * @accept: string compare
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *t;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				t = &s[i];
				return (t);
			}
			j++;
		}
		i++;
	}

	return (0);
}
