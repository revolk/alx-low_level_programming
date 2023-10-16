#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

