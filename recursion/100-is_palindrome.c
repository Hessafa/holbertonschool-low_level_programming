#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (_check_palindrome(s, 0, _strlen(s) - 1));
}

/**
 * _check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The current starting index to check.
 * @end: The current ending index to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
