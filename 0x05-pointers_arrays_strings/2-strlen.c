#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}

