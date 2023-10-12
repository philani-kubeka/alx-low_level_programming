#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char *s, *separator;
	unsigned int j;
	va_list ap;

	va_start(ap, format);

	separator = "";

	j = 0;

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);

				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}
	printf("\n");
	va_end(ap);
}
