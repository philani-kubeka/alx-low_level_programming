#include "main.h"
/**
 * _strncpy - copies the string pointed to by src, includinig
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: input value.
 * @src: input value.
 * @n: input value.
 *
 * Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
