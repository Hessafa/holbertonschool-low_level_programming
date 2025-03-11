#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to newly allocated space with concatenated strings,
 * or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for concatenated string */
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copy s1 to result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copy s2 to result */
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	/* Add null terminator */
	result[i + j] = '\0';

	return (result);
}
