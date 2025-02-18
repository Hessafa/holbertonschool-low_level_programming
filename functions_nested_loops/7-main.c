#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98); /* Test with a positive number */
	print_last_digit(0);  /* Test with 0 */
	r = print_last_digit(-1024); /* Test with a negative number */
	_putchar('0' + r);  /* Print the returned last digit */
	_putchar('\n');

	return (0);
}
