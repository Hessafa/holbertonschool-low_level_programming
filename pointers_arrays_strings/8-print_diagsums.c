#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to a square matrix of integers.
 * @size: The size of the matrix (number of rows/columns).
 *
 * Return: Nothing. The function prints the sum of both diagonals.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];  /* Primary diagonal */
		sum2 += a[i * size + (size - i - 1)];  /* Secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
