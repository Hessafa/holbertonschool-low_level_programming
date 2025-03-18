#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
    if (name && f) /* Check if both name and function pointer are valid */
        f(name); /* Call the function pointed to by f */
}

void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

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
