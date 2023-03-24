#include "main.h"

/**
 * print_numbers - Function
 *
 * Description: Prints the numbers, from 0 to 9.
 *
 * Return: No return because it's a void function
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
