#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separator between two strings
 * @n: number of parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}

