#include "main.h"
/**
 * clear_bit - Function
 *
 * Description: Sets the value of a bit to 0 at a given index.
 *
 * @n: Pointer to an integer.
 * @index: The index to set the bit in to 0.
 *
 * Return: 1 if it worked.
 *        -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_num = 1 << index;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((*n >> index) & 1)
		*n -= set_num;
	return (1);
}
