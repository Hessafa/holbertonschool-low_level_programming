#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
	int i;

	if (n <= 0) /* If n is 0 or less, print only a new line */
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++) /* Loop to print '_' n times */
		{
			_putchar('_');
		}
		_putchar('\n'); /* Print a new line at the end */
	}
}
