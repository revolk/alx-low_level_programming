/* 1-array_iterator.c */

#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to apply on array elements.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

