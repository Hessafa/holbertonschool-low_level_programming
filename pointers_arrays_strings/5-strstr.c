#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in haystack.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0') /* If needle is an empty string, return haystack */
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		/* Check if the substring starting at haystack matches needle */
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		/* If we have matched the entire needle, return pointer to the start */
		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL); /* Return NULL if no match is found */
}
