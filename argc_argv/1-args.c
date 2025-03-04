#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: an array of strings containing the program arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* We don't need to use argv in this program */
	(void)argv;

	/* Print the number of arguments (excluding the program name) */
	printf("%d\n", argc - 1);
	return (0);
}
