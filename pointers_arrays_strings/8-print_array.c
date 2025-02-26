#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to print.
 *
 * This function prints the elements of the array separated by
 * a comma and a space. The numbers are displayed in the same
 * order as they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	/* Iterate through the array */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Print a comma and space if it's not the last element */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	/* Print a new line */
	printf("\n");
}
