#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)  /* Loop through hours (00 to 23) */
	{
		for (minute = 0; minute < 60; minute++)  /* Loop through minutes (00 to 59) */
		{
			_putchar('0' + hour / 10);  /* Print the first digit of the hour */
			_putchar('0' + hour % 10);  /* Print the second digit of the hour */
			_putchar(':');  /* Print the colon separator */
			_putchar('0' + minute / 10);  /* Print the first digit of the minute */
			_putchar('0' + minute % 10);  /* Print the second digit of the minute */
			_putchar('\n');  /* Print a newline */
		}
	}
}
