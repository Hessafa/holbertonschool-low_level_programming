#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs operations on two integers based on the operator passed
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 on success, appropriate exit status on error
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
