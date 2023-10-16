#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
    int len = _strlen(str);
    int start = (len + 1) / 2;

    while (start < len)
    {
        _putchar(str[start]);
        start++;
    }
    _putchar('\n');
}

