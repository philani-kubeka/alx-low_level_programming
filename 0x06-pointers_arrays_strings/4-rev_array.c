#include "main.h"
/**
 * reverse_array - Prints reverse string.
 * @a: input value.
 * @n: input value.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
