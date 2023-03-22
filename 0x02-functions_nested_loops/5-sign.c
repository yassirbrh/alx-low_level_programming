#include "main.h"
/**
 * print_sign - function
 *
 * Description: function that prints the sign of a number.
 *
 * @n: stores the number.
 *
 * Return: 1 (Greater than zero)
 *         0 (Zero)
 *        -1 (Less than zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
