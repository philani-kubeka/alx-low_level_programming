#include "main.h"

/**
 * *argstostr -  concatenates all the arguments of program.
 *
 * @ac: argument count
 * @av: pointer
 *
 * Return: NULL, or pointer.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total;
	char *a, *rept;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;

		total++;
	}
	total++;

	a = malloc(total * sizeof(char));

	if (a == NULL)
		return (NULL);

	rept = a;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (rept);
}
