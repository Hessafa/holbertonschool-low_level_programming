#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) /* Loop from 1 to 100 */
	{
		if (i % 3 == 0 && i % 5 == 0) /* Check for multiples of both 3 and 5 */
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0) /* Check for multiples of 3 */
		{
			printf("Fizz");
		}
		else if (i % 5 == 0) /* Check for multiples of 5 */
		{
			printf("Buzz");
		}
		else /* Print the number */
		{
			printf("%d", i);
		}

		if (i != 100) /* Print a space after each number/word except the last one */
		{
			printf(" ");
		}
	}

	printf("\n"); /* Print a new line at the end */
	return (0);
}
