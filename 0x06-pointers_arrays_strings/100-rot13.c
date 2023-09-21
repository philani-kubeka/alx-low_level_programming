#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 *
 * @n: input value.
 * Return: Always 0.
 */
char *rot13(char *n)
{
	int i, j;

	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (n[i] == in[j])
			{
				n[i] = out[j];
				break;
			}
		}
	}
	return (n);
}
