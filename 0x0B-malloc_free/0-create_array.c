#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array
 * @c: char
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	j = (char *) malloc(sizeof(char) * size);

	if (j == NULL)
	{
		return (0);
	}

	while (i < size)
	{
		*(j + i) = c;
		i++;
	}

	*(j + i) = '\0';

	return (j);
}
