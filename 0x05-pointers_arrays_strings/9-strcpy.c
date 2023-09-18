#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, includinig
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: input value.
 * @src: input value.
 *
 * Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;
	int i = 0;

	while (*(src + i) != '\0')
	{
		*dest++ = *src++;
	}
	return (aux);
}
