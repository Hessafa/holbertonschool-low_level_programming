#include "main.h"

/**
 * wildcmp - compares two strings with support for the '*' wildcard.
 * @s1: the first string.
 * @s2: the second string with potential wildcards (*).
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}
		return (wildcmp(s1, s2 + 1) ||
			(*s1 && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
