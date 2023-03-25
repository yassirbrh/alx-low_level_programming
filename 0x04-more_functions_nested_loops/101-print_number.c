#include "main.h"
/**
 * print_number - Function
 *
 * Description: Prints an integer
 *
 * @n: The integer to print
 *
 * Return: 0 Always (Success)
 */
void print_number(int n)
{
	int i, j, num;

	i = 1;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	num = n;
	while (num > 0)
	{
		num /= 10;
		i *= 10;
	}
	for (j = i / 10; j > 0; j = j / 10)
	{
		_putchar('0' + (n / j) % 10);
	}
	if (n == 0)
	_putchar('0');
}
