#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Performs simple calculations.
 * @argc: The number of arguments.
 * @argv: The arguments passed to the program.
 * 
 * Return: 0 if the operation is successful, or exits with an error code.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (strcmp(argv[2], "+") == 0)
		op_func = (int (*)(int, int)) (a + b);
	else if (strcmp(argv[2], "-") == 0)
		op_func = (int (*)(int, int)) (a - b);
	else if (strcmp(argv[2], "*") == 0)
		op_func = (int (*)(int, int)) (a * b);
	else if (strcmp(argv[2], "/") == 0)
	{
		if (b == 0)
		{
			printf("Error\n");
			return (100);
		}
		op_func = (int (*)(int, int)) (a / b);
	}
	else
	{
		printf("Error\n");
		return (99);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
