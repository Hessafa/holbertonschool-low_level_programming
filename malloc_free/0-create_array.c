#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 *                char.
 * @size: size of the array to create
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for the array of size 'size' */
	char *arr = malloc(size * sizeof(char));

	/* If malloc fails, return NULL */
	if (arr == NULL)
	{
		return (NULL);
	}

	/* Initialize the array with the character 'c' */
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	/* Return the pointer to the array */
	return (arr);
}
