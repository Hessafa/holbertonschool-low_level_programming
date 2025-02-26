#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string.
 *
 * This function converts the string to an integer, taking into account
 * leading spaces, signs, and non-numeric characters.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip leading spaces */
	while (s[i] == ' ')
	{
		i++;
	}

	/* Handle signs */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	/* Convert numeric characters to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (INT_MAX / 10) ||
		    (result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
