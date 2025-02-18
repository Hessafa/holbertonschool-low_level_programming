#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value for
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);  /* Negate if the number is negative */
	else
		return (n);   /* Return the number as is if it's positive or zero */
}
