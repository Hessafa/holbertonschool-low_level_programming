#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number from which to extract the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10; /* Extract the last digit */

	if (last_digit < 0)
		last_digit = -last_digit; /* Make the last digit positive if negative */

	_putchar(last_digit + '0'); /* Print the last digit */

	return (last_digit);
}
