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
	char *origin_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (origin_dest);
}
