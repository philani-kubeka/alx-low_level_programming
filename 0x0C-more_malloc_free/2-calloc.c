#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: memory spaces
 * @size: nmemb size
 *
 * Return: pointer or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);

	if (space == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
