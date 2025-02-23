#include "main.h"

/**
 * _isdigit - Checks for digit 0 to 9.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9') /* Check if the digit  is between '0' and '9' */
	{
		return (1); /* Return 1 if it is digit */
	}
	else
	{
		return (0); /* Return 0 if it is not digit */
	}
}
