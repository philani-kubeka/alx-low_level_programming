#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @...: more parameters
 * @n: parameters
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int b;
	va_list ap;

	va_start(ap, n);

	for (b = 0; b < n; b++)
	{
		string = va_arg(ap, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator == NULL)
			printf("(nil)");

		if (b < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
