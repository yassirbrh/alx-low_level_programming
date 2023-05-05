#include "main.h"
/**
 * flip_bits - Function
 *
 * Description: Returns the number of bits you would need to flip to get from
 *              one number to another.
 *
 * @n: First number.
 * @m: second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, number_of_bits = 0;

	for (i = 0; i < 8 * sizeof(unsigned long int); i++)
	{
		if (((n >> i) ^ (m >> i)) & 1)
			number_of_bits++;
	}
	return (number_of_bits);
}
