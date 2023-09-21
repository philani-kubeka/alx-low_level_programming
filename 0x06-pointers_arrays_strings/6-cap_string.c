#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: input value.
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0, j, k;

	while (str[i] != '\0')
		i++;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	for (j = 1; j < i; j++)
	{
		k = j - 1;
		if (str[k] == 9 || str[k] == 10 || str[k] == '('
			|| str[k] == ')' || str[k] == '{' || str[k] == '}'
			|| str[k] == ',' || str[k] == '.' || str[k] == ';'
			|| str[k] == '?' || (str[k] > 31 && str[k] < 35))
			if (str[j] > 96 && str[j] < 123)
				str[j] -= 32;
	}
	return (str);
}
