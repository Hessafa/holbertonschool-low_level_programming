#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: an array of strings containing the program arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	/* Loop through all arguments and print each one */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); /* Print each argument on a new line */
	}
	return (0);
}
