#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor = 1;
	int temp;

	/* Handle INT_MIN as a special case */
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
	}

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find the divisor to extract the first digit */
	temp = n;
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	/* Print each digit */
	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
