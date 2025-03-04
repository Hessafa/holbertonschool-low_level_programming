#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: the number of arguments
 * @argv: an array of strings containing the program arguments
 *
 * Return: Always 0 if successful, 1 if there are not exactly two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the program has exactly two arguments */
	if (argc != 3)
	{
		printf("Error\n"); /* Print Error if arguments are not exactly two */
		return (1);
	}

	/* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the numbers and print the result */
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
