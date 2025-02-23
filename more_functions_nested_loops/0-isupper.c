#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z') /* Check if the character is between 'A' and 'Z' */
	{
		return (1); /* Return 1 if it is uppercase */
	}
	else
	{
		return (0); /* Return 0 if it is not uppercase */
	}
}
