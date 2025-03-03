#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to the pointer to a char.
 * @to: A pointer to a char that will be assigned to *s.
 *
 * Return: Nothing. The function modifies the pointer passed to it.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
