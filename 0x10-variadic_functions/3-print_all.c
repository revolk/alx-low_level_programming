#include "variadic_functions.h"

/**
 * print_char - prints a char argument
 * @arg: the char argument
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an int argument
 * @arg: the int argument
 */

void print_int(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * print_float - prints a float argument
 * @arg: the float argument
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string argument
 * @arg: the string argument
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *separator = "";
	va_list a_list;

	va_start(a_list, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (i > 0 && format[i - 1] != '\0')
			printf(", ");

		switch (format[i])
		{
			case 'c':
				print_char(a_list);
				break;
			case 'i':
				print_int(a_list);
				break;
			case 'f':
				print_float(a_list);
				break;
			case 's':
				print_string(a_list);
				break;
			default:
				break;
		}

		i++;
	}

	printf("\n");

	va_end(a_list);
}

