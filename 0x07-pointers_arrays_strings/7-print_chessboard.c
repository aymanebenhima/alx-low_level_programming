#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to the chessboard
 *  represented as an 8x8 array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}