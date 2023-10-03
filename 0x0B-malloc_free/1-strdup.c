#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	a = malloc(i * sizeof(*a) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	a[j] = '\0';

	return (a);
}
