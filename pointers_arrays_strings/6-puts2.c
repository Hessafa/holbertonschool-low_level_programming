#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string.
 *
 * This function iterates through the string and prints every other character
 * using the _putchar function. After printing the characters, it prints
 * a new line.
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate through the string */
	while (str[i] != '\0')
	{
		/* Print every other character */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	/* Print a new line */
	_putchar('\n');
}
