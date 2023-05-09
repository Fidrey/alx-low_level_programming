#include "main.h"
/**
 * print__chessboard -entry point
 * @a: array
 * return: always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (J = 0; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
