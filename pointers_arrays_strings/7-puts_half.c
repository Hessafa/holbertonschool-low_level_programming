#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * This function calculates the length of the string, determines the starting
 * point for the second half, and prints the characters using the _putchar
 * function. If the length is odd, it prints the last n characters, where
 * n = (length + 1) / 2.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting point for the second half */
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	/* Print the second half of the string */
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	/* Print a new line */
	_putchar('\n');
}
