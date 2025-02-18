#include <stdio.h>

/**
 * _isalpha - checks if a character is an alphabetic letter.
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - Entry point to test the _isalpha function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char test_char = 'A';

	if (_isalpha(test_char))
	{
		printf("%c is an alphabetic character.\n", test_char);
	}
	else
	{
		printf("%c is not an alphabetic character.\n", test_char);
	}

	return (0);
}
