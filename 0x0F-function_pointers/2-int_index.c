#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer
 * Return: index of 1st element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
		if (cmp(array[a]))
			return (a);

	if (a == size)
		return (-1);

	return (-1);
}
