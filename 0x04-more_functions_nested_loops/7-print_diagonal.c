#include "main.h"
/**
 * print_diagonal- Function
 *
 * Description: function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: No return because it's a void function
 */
void print_diagonal(int n)
{
	int i, j, d;

	d = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < d; j++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		d++;
	}
	if (n < 1)
	_putchar('\n');
}
