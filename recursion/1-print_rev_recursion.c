#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to print in reverse.
 *
 * Description: This function prints each character of the string `s`
 * in reverse order using recursion and `_putchar`.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		return;
	}

	_print_rev_recursion(s + 1); /* Recursively call for the next character */
	_putchar(*s); /* Print current character after recursion unwinds */
}
