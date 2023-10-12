#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @...: more parameters
 * @n: parameters
 *
 * Return: all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int b;
	va_list ap;

	va_start(ap, n);

	for (b = 0; b < n; b++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (separator == NULL)
			continue;
		if (b < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
