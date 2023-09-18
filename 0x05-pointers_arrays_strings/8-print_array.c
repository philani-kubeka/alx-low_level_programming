#include "main.h"
/**
 * print_array - Prints # square.
 * @a: input value.
 * @n: input value
 * Return: Always 0.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
