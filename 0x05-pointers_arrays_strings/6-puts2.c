#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: A pointer to a string.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i])
    {
        _putchar(str[i]);
        i += 2;
    }
    _putchar('\n');
}

