#include "main.h"

/**
 * is_prime_number - Returns 1 if the number is prime, 0 otherwise.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - Helper function to check if a number is divisible
 * by any number between 2 and sqrt(n).
 * @n: The number to check.
 * @i: The current divisor.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)  /* No divisors found, n is prime */
		return (1);
	if (n % i == 0)  /* Found a divisor, n is not prime */
		return (0);
	return (_is_prime_helper(n, i + 1));  /* Check next divisor */
}
