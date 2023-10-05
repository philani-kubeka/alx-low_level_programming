#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer or NULL.
 */
int *array_range(int min, int max)
{
	int *arr, difference, i;

	if (min > max)
		return (NULL);

	difference = max - min;
	arr = malloc((difference + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= difference; i++)
		arr[i] = min++;

	return (arr);
}
