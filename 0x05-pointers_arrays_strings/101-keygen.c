#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[101]; // Assuming a maximum password length of 100 characters
    int i, length;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password length (between 6 and 10 characters)
    length = rand() % 5 + 6;

    // Generate random characters for the password
    for (i = 0; i < length; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    // Add a null terminator to the end of the password
    password[length] = '\0';

    // Print the generated password
    printf("%s\n", password);

    return 0;
}

