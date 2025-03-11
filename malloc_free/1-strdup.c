#include <stdlib.h>

/**
 * _strdup - duplicates a string in newly allocated memory
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL
 * or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the new string */
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	/* Copy the string and add null terminator */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];
	dup_str[len] = '\0';

	return (dup_str);
}
