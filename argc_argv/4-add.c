#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers and prints the result
 * @argc: the number of arguments
 * @argv: an array of strings containing the program arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* Check if no arguments are passed, print 0 and return */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through arguments, checking if they are valid numbers */
	for (i = 1; i < argc; i++)
	{
		/* Check if each character in the argument is a digit */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Add the valid argument to sum */
		sum += atoi(argv[i]);
	}

	/* Print the final sum */
	printf("%d\n", sum);

	return (0);
}
