#include "main.h"
/**
 * print_chessboard - Function
 *
 * Description: Prints the chessboard.
 *
 * @a: array of chess
 *
 * Return: No return because it's a void function
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	if (sizeof(a) == 64)
	{
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				_putchar(a[i][j]);
			}
			_putchar('\n');
		}
	}
}
