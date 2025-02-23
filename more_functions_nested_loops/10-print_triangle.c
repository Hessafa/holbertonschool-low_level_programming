#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0) /* If size is 0 or less, print only a new line */
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++) /* Loop to print each row */
		{
			for (j = 1; j <= size - i; j++) /* Print spaces before the '#' */
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++) /* Print the '#' characters */
			{
				_putchar('#');
			}
			_putchar('\n'); /* Print a new line after each row */
		}
	}
}
