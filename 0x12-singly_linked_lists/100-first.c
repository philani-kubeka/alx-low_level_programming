#include "lists.h"

/* constructor*/
void constructor(void) __attribute__((constructor));

/**
 * constructor - function that prints message before main function
 *
 * Return: always 0
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
