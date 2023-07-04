#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a:  array of pieces
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
