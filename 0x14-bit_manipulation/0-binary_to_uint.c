#include "main.h"
/**
 * binary_to_uint - Function
 *
 * Description: Converts a binary number to an unsigned int.
 *
 * @b: The string containing the binary number.
 *
 * Return: An unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, number = 0, length = 0;
	char bit;

	if (b == NULL)
		return (0);
	while (*(b + length) != '\0')
	length++;
	for (i = length - 1; i >= 0; i--)
	{
		bit = *(b + i);
		if (bit != '0' && bit != '1')
			return (0);
		if (bit == '1')
			number += 1 << ((length - 1) - i);
	}
	return (number);
}
