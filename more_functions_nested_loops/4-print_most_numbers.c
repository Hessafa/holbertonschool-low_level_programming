#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++) /* Loop from 0 to 9 */
	{
		if (i != 2 && i != 4) /* Skip 2 and 4 */
			_putchar(i + '0'); /* Print the current number */
	}
	_putchar('\n'); /* Print a new line */
}
