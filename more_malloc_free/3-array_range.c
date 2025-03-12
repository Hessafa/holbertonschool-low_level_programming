#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive).
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: pointer to the newly created array or NULL if failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size = max - min + 1, i;

	/* Return NULL if min > max */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < size; arr[i] = min + i, i++)
		;

	return (arr);
}
