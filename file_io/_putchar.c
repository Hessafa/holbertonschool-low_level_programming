#include <stdlib.h>
/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On success 1, -1 on error
 */
int _putchar(char c)
{
return (write(0, &c, 1));
}
