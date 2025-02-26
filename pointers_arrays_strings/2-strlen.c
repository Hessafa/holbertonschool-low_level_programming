#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * This function calculates the length of the string pointed to by s.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	/* Iterate through the string until the null terminator is reached */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
