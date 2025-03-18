#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>  /* Added the missing include for printf */

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of dividing two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of the division of a by b
 *         If b is 0, exit with status 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");  /* Printing Error when division by zero occurs */
		exit(100);  /* Exit with status 100 if division by zero */
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of dividing two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division of a by b
 *         If b is 0, exit with status 100
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");  /* Printing Error when modulo by zero occurs */
		exit(100);  /* Exit with status 100 if modulo by zero */
	}
	return (a % b);
}
