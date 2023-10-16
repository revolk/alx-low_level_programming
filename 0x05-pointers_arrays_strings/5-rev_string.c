#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to a string.
 */
void rev_string(char *s)
{
    int start = 0;
    int end = _strlen(s) - 1;
    char temp;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

