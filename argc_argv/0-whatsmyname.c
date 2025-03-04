#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: an array of strings containing the program arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* Avoid unused variable warning */
	(void)argc;

	printf("%s\n", argv[0]);  /* Print the name of the program */
	return (0);
}
