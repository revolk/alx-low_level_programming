#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is composed of digits
 * @s: The string to check
 * 
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * 
 * Return: 0 if successful, 98 if there are issues with arguments
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    int len1 = 0, len2 = 0, i, j, carry, sum, num1, num2, temp;
    int *result;

    while (argv[1][len1])
        len1++;
    while (argv[2][len2])
        len2++;

    result = calloc(len1 + len2, sizeof(int));

    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        num1 = argv[1][i] - '0';
        j = len2 - 1;
        temp = len1 - 1 - i;

        for (; j >= 0; j--)
        {
            num2 = argv[2][j] - '0';
            sum = num1 * num2 + carry + result[temp];
            carry = sum / 10;
            result[temp] = sum % 10;
            temp++;
        }

        if (carry > 0)
            result[temp] += carry;
    }

    i = len1 + len2 - 1;
    while (i >= 0 && result[i] == 0)
        i--;

    if (i == -1)
        printf("0\n");
    else
    {
        for (; i >= 0; i--)
            printf("%d", result[i]);
        printf("\n");
    }

    free(result);

