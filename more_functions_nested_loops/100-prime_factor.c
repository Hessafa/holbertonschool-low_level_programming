#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143; /* The number to factorize */
	long largest_prime = -1; /* Variable to store the largest prime factor */
	long i;

	/* Divide by 2 until num is odd */
	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}

	/* Check odd factors from 3 to sqrt(num) */
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= i;
		}
	}

	/* If num is still greater than 2, it is a prime factor */
	if (num > 2)
	{
		largest_prime = num;
	}

	/* Print the largest prime factor */
	printf("%ld\n", largest_prime);

	return (0);
}
