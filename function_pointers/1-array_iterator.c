#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 *                  of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be used.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]); /* Apply the action on each element */
	}
}
