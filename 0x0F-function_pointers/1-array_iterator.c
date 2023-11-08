#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array != NULL && action != NULL)
    {
        size_t i = 0;
        while (i < size)
        {
            action(array[i]);
            i++;
        }
    }
}

