#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to an 8x8 array representing the chessboard.
 *
 * Return: Nothing. The function prints the chessboard to the standard output.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)  /* Loop through each row */
	{
		for (col = 0; col < 8; col++)  /* Loop through each column in the row */
		{
			putchar(a[row][col]);  /* Print the chess piece at this position */
		}
		putchar('\n');  /* Print a newline after each row */
	}
}
