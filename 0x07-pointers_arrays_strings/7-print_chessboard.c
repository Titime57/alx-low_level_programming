#include "main.h"
/**
 * print_chessboard - entry point
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int l;
	int m;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[l][m]);
		_putchar('\n');
	}
}
