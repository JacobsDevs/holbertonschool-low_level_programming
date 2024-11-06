#include "main.h"
/**
 * print_chessboard - Print the provided chessboard to the screen
 * @a: Pointer to the beginning of the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
			_putchar(a[i][j++]);
		_putchar(10);
		i++;
	}
}
