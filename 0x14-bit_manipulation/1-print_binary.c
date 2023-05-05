#include "main.h"
/**
 * print_binary - Function
 *
 * Description: Prints the binary representation of a number.
 *
 * @n: The integer to print its binary representation.
 *
 * Return: No return because it's a void function.
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int len = 0;

	while (num != 0)
	{
		num = num >> 1;
		len++;
	}
	len--;
	if (n == 0)
		_putchar('0');
	while (len >= 0)
	{
		if (((n >> len) & 1) == 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
