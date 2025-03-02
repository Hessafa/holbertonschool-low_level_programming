#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of `s`
 *         which consist only of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		a = accept;

		/* Check if the current character in `s` is in `accept` */
		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		/* If the character is not in `accept`, stop searching */
		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
