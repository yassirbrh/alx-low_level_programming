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
	unsigned long int num = n, b = 0;
	int bit, i = 0, len = 0;

	while (num != 0)
	{
		num = num >> 1;
		len++;
	}
	len--;
	num = n;
	while (num != 0)
	{
		bit = num - ((num >> 1) * 2);
		b += bit * (1 << (len - i));
		num = num >> 1;
		i++;
	}
	for (i = 0; i <= len; i++)
	{
		bit = b - ((b >> 1) * 2);
		b = b >> 1;
		_putchar(bit + '0');
	}
	if (n == 0)
		_putchar('0');
}
