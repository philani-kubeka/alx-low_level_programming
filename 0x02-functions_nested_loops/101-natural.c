#include <stdio.h>
/**
 * main -   prints the sum of all the multiples of 3 or 5.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}

	printf("%d\n", j);

	return (0);
}
