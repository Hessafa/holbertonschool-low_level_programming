#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * This function copies the string from src to dest, including the
 * null terminator, and returns a pointer to dest.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy characters from src to dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Add the null terminator */
	dest[i] = '\0';

	/* Return a pointer to dest */
	return (dest);
}
