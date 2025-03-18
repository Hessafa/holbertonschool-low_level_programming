#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int)); /* Print the current number */

		if (separator != NULL && i < n - 1)
			printf("%s", separator); /* Print the separator if not NULL */
	}

	va_end(args);

	printf("\n"); /* Print the new line at the end */
}
