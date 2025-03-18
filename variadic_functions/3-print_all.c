#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything, based on the format string
 * @format: a string representing the types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, c;
	int num;
	float f;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		if (format[i] == 'c')
		{
			c = va_arg(args, int);  /* char is promoted to int in va_arg */
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);  /* float is promoted to double in va_arg */
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
