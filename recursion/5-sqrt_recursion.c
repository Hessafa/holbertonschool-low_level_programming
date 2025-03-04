#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be calculated.
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 * root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function that performs the recursion.
 * @n: The number whose square root is to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square
 * root.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)  /* Found the square root */
		return (guess);
	else if (guess * guess > n)  /* No square root found */
		return (-1);
	else  /* Recursively check the next guess */
		return (_sqrt_helper(n, guess + 1));
}
