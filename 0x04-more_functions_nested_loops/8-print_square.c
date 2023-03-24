#include "main.h"
/**
 * print_square - Function
 *
 * Description: Prints a square
 *
 * @size: the size of square
 *
 * Return: No return because it's a void function
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	_putchar('\n');
}
