#include "main.h"
/**
 * print_triangle - Function
 *
 * Description: Prints a triangle
 *
 * @size: The size of the triangle
 *
 * Return: No return because it's a void function
 */
void print_triangle(int size)
{
	int i, j, d;

	d = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < d)
			_putchar(' ');
			else
			_putchar('#');
		}
		_putchar('\n');
		d--;
	}
	if (size < 1)
	_putchar('\n');
}
