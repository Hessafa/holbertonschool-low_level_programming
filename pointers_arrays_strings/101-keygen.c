#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * This program generates a random password consisting of printable ASCII
 * characters and prints it to stdout.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i;
	int password_length = 12; /* Length of the password */
	char password[13]; /* Array to store the password (12 chars + null terminator) */

	/* Seed the random number generator with the current time */
	srand(time(NULL));

	/* Generate random printable ASCII characters */
	for (i = 0; i < password_length; i++)
	{
		/* Generate a random character between 33 and 126 (printable ASCII range) */
		password[i] = rand() % 94 + 33;
	}

	/* Add the null terminator */
	password[password_length] = '\0';

	/* Print the password */
	printf("%s\n", password);

	return (0);
}
