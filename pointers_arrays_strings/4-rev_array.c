#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to reverse.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		/* Swap the elements at start and end */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move towards the center of the array */
		start++;
		end--;
	}
}
