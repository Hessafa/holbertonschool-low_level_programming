#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *main_ptr;

	if (argc != 2) /* Check if the number of arguments is correct */
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]); /* Convert argument to an integer */
	if (bytes < 0) /* Check if the number of bytes is negative */
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (unsigned char *)main; /* Get the address of the main function */

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_ptr[i]); /* Print opcodes in hexadecimal format */
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
