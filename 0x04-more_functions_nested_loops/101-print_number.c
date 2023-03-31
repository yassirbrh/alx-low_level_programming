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
	unsigned int i, j, num;

	i = 1;
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	num = n;
	while (num > 9)
	{
		num /= 10;
		i *= 10;
	}
	num = n;
	if (num != 0)
	_putchar('0' + (num / i) % 10);
	for (j = i / 10; j > 0; j = j / 10)
	{
		_putchar('0' + (num / j) % 10);
	}
	if (num == 0)
	_putchar('0');
}
