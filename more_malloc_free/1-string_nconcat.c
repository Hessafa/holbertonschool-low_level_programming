#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes from s2.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate.
 *
 * Return: pointer to the new string or NULL if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Use entire s2 if n >= len2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for result */
	result = malloc(len1 + n + 1); /* +1 for null terminator */
	if (result == NULL)
		return (NULL);

	/* Copy s1 into result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy n bytes of s2 */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	/* Null terminate */
	result[i + j] = '\0';

	return (result);
}
