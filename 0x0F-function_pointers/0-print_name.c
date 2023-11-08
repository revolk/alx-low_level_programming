/* 0-print_name.c */

#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print name using a function pointer.
 * @name: The string to print.
 * @f: Pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

