#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0) /* If n is 0 or less, print only a new line */
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++) /* Loop to print each line of the diagonal */
		{
			for (j = 0; j < i; j++) /* Print spaces before the '\' */
			{
				_putchar(' ');
			}
			_putchar('\\'); /* Print the '\' character */
			_putchar('\n'); /* Print a new line */
		}
	}
}
