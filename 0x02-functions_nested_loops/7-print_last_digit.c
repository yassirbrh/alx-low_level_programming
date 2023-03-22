#include "main.h"
/**
 * print_last_digit - function
 *
 * Description: function that prints the last digit of a number.
 *
 * @n: stores the number.
 *
 * Return: the last digit of number (Success)
 */
int print_last_digit(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
