#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing 0 and 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or contains invalid chars.
 */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
#endif /* MAIN_H */
