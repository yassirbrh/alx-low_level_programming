#include "main.h"
/**
 * print_line - Function
 *
 * Description: Draws a straight line in the terminal.
 *
 * @n: the number of times the character _ should be printed
 *
 * Return: No return because it's a void function
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
