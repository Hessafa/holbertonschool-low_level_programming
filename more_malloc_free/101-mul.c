#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string is a valid number
 * @str: the string to check
 *
 * Return: 1 if the string is a valid number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	/* Handle empty string */
	if (str[0] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (!isdigit(str[i])) /* Check if each character is a digit */
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	long int n1, n2;

	/* Check if exactly two arguments are provided */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	/* Check if both arguments are valid numbers */
	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert strings to integers */
	n1 = atol(num1);
	n2 = atol(num2);

	/* Multiply and print the result */
	printf("%ld\n", n1 * n2);

	return (0);
}
