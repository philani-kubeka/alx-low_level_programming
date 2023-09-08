#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the string in printf function
 *
 * Description: using main function
 * this program prints and that piec of art is useful
 * Return: 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
