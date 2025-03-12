#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	/* Return NULL if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set allocated memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}
