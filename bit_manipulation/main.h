#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing 0 and 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or contains invalid chars.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 */
void print_binary(unsigned long int n);

#endif /* MAIN_H */
