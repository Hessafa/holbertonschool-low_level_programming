#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * @...: A variable number of arguments to sum.
 *
 * Return: The sum of all the parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;  /* Declare a va_list variable */

	if (n == 0)  /* If there are no arguments, return 0 */
		return (0);

	va_start(args, n);  /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);  /* Extract each argument */
	}

	va_end(args);  /* Clean up the va_list */

	return (sum);  /* Return the total sum */
}
