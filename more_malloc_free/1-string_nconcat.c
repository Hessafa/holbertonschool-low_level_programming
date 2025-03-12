#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - conc two strings up to n bytes from the sec string.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes from s2 to concatenate.
 *
 * Return:pointer to allocated memory cont the conc string.
 * If memory allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	/* Handle NULL cases by treating them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the lengths of the two strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Use the entire string s2 if n is greater than or equal to len2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the new concatenated string */
	result = malloc(len1 + n + 1); /* +1 for the null terminator */
	if (result == NULL)
		return (NULL);

	/* Copy s1 into the result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy the first n bytes of s2 into the result */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	/* Add the null terminator at the end */
	result[i + j] = '\0';

	return (result);
}
