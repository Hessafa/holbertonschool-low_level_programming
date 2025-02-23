#include "main.h"

/**
 * print_square - Prints a square of a given size.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0) /* If size is 0 or less, print only a new line */
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++) /* Loop to print each row */
		{
			for (j = 0; j < size; j++) /* Loop to print each column */
			{
				_putchar('#'); /* Print the '#' character */
			}
			_putchar('\n'); /* Print a new line after each row */
		}
	}
}
