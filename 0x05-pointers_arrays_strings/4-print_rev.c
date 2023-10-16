#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to a string.
 */
void print_rev(char *s)
{
    int len = _strlen(s);

    while (len > 0)
    {
        len--;
        _putchar(s[len]);
    }
    _putchar('\n');
}

