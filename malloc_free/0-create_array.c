#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: NULL if size = 0 or if malloc fails,
 * otherwise return a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with character c */
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
