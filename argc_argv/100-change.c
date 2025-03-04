#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: the number of arguments
 * @argv: an array of strings containing the program arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check if exactly one argument is passed */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	cents = atoi(argv[1]);

	/* If the number is negative, print 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Use the greedy approach to calculate the minimum number of coins */
	coins += cents / 25;  /* Use 25 cent coins */
	cents %= 25;  /* Remainder after using 25 cent coins */

	coins += cents / 10;  /* Use 10 cent coins */
	cents %= 10;  /* Remainder after using 10 cent coins */

	coins += cents / 5;  /* Use 5 cent coins */
	cents %= 5;  /* Remainder after using 5 cent coins */

	coins += cents / 2;  /* Use 2 cent coins */
	cents %= 2;  /* Remainder after using 2 cent coins */

	coins += cents / 1;  /* Use 1 cent coins */

	/* Print the total number of coins used */
	printf("%d\n", coins);

	return (0);
}
