/* 2-int_index.c */

#include "function_pointers.h"

/**
 * int_index - Return the index of the first element that matches the comparison function.
 * @array: The array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 * Return: Index of the first matching element, or -1 if no match or error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}

