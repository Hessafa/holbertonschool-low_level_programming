#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string.
 *
 * This function iterates through the string and prints each character
 * using the _putchar function. After printing the string, it prints
 * a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
