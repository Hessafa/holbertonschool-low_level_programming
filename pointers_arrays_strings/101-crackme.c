#include <stdio.h>
#include <string.h>

/**
 * main - Simulates the 101-crackme program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * This program checks if the provided password is valid.
 * For demonstration purposes, the valid password is "1234".
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <password>\n", argv[0]);
        return (1);
    }

    if (strcmp(argv[1], "1234") == 0)
    {
        printf("Tada! Congrats\n");
    }
    else
    {
        printf("Wrong password\n");
    }

    return (0);
}
