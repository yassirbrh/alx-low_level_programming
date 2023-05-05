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
	int bit;

	if (index > 8 * sizeof(unsigned long int))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
