#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to a string.
 */
void rev_string(char *s)
{
    int length = _strlen(s);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

