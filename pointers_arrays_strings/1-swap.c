#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first one.
 * @b: Pointer to the second one.
 *
 * This function takes two pointers to ints and swaps the values
 * they point to.
 */
void swap_int(int *a, int *b)
{
	int temp; /* Temporary variable to hold the value of *a */

	temp = *a; /* Store the value pointed to by a in temp */
	*a = *b;   /* Assign the value pointed to by b to a */
	*b = temp; /* Assign the value stored in temp to b */
}
