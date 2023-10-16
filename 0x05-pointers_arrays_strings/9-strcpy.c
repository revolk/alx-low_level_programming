#include "main.h"

/**
 * _strcpy - Copies a string to a buffer.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return dest;
}

