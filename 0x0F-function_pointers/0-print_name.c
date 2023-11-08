#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to be printed
 * @f: function pointer to format and print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

