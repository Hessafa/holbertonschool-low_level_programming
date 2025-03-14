#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the new concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	/* Check if ac is 0 or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length required for the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* For the newline character after each argument */
	}

	/* Allocate memory for the new string (+1 for null terminator) */
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n'; /* Add newline after each argument */
		k++;
	}

	str[k] = '\0'; /* Null-terminate the string */

	return (str);
}
