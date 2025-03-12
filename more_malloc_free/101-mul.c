#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_number - Checks if a string is a valid number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_number(char *str)
{
	int i = 0;

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
 * multiply_large_numbers - Multiplies two large numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: Pointer to the result string.
 */
char *multiply_large_numbers(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len_result = len1 + len2;
	char *result = (char *)malloc(len_result + 1); /* +1 for null ter */
	int i, j, carry, mul;

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* Initialize the result with '0's */
	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	/* Multiply the numbers from right to left */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = mul / 10;
			result[i + j + 1] = (mul % 10) + '0';
		}
		result[i + j + 1] += carry;
	}

	/* Remove leading zeros */
	i = 0;
	while (result[i] == '0' && i < len_result - 1)
		i++;

	/* Shift the result string */
	char *final_result = result + i;

	return (final_result);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_number(num1) || !is_number(num2))
	{
		printf("Error\n");
		exit(98);
	}

	/* Multiply the numbers */
	result = multiply_large_numbers(num1, num2);

	/* Print the result */
	printf("%s\n", result);

	/* Free the memory allocated for result */
	free(result - (result - argv[1])); /* Freeing the allocated memory */

	return (0);
}
