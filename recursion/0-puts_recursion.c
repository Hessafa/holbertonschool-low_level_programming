#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to print.
 *
 * Description: This function prints each character of the string `s` using
 * recursion and `_putchar`. It adds a new line at the end.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') /* Base case: end of string */
    {
        _putchar('\n'); /* Print new line */
        return;
    }

    _putchar(*s); /* Print current character */
    _puts_recursion(s + 1); /* Recursively call for the next character */
}
