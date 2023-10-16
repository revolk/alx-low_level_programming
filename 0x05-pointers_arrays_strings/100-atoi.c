#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to a string.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    int i = 0;

    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
        i++;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num * sign;
}

