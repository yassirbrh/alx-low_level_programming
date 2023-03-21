#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Description: function that prints 10 times the alphabet in lowercase.
 *
 * Return: no value, it's a void function
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
