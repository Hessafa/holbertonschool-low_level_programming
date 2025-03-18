#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using the function pointed to by f
 * @name: name of the person
 * @f: function pointer to a function that prints a name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f) /* Check if both name and function pointer are valid */
		f(name); /* Call the function pointed to by f */
}

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: nothing
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name of the person
 *
 * Return: nothing
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i]) /* Loop through each character of the name */
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] - 'a' + 'A'); /* Convert to uppercase */
		}
		else
		{
			putchar(name[i]); /* Print as is */
		}
		i++;
	}
	putchar('\n'); /* Print newline after name */
}
