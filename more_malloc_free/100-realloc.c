#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: pointer to the newly allocated memory, or NULL if fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *old_ptr, *new_ptr_char;

	/* If new_size is equal to old_size, return the original pointer */
	if (new_size == old_size)
		return (ptr);

	/* If new_size is zero, free the old pointer and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, allocate new memory of size new_size */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the data from the old pointer to the new one */
	old_ptr = ptr;
	new_ptr_char = new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr_char[i] = old_ptr[i];

	/* Free the old pointer */
	free(ptr);

	return (new_ptr);
}
