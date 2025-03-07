#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) /* Loop 10 times */
	{
		for (j = 0; j <= 14; j++) /* Loop from 0 to 14 */
		{
			if (j >= 10) /* Handle two-digit numbers */
				_putchar((j / 10) + '0'); /* Print the tens digit */
			_putchar((j % 10) + '0'); /* Print the ones digit */
		}
		_putchar('\n'); /* Print a new line */
	}
}
