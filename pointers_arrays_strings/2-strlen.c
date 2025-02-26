#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This program demonstrates the use of the _strlen function.
 * It initializes a string, calculates its length using _strlen,
 * and prints the length.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
