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
	unsigned int i, j, num, num1;

	i = 1;
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	num = n;
	num1 = num;
	while (num > 9)
	{
		num /= 10;
		i *= 10;
	}
	if (num != 0 && i == 1000000000)
	_putchar('0' + (num / i) % 10);
	else
	i *= 10;
	if (num >= 0 && num < 10)
	_putchar('0' + num);
	else
	{
	for (j = i / 10; j > 0; j = j / 10)
	_putchar('0' + (num / j) % 10);
	}
}
