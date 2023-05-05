#include "main.h"
/**
 * get_bit - Function
 *
 * Description: Returns the value of a bit at a given index.
 *
 * @n: The integer to converts to binary.
 * @index: The index to return its bit value.
 *
 * Return: The value of the bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = n;
	unsigned int len = 0;
	int bit;

	while (num != 0)
	{
		num >>= 1;
		len++;
	}
	if (n == 0)
		len++;
	len--;
	if (index > len)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
