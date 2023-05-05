#include "main.h"
/**
 * get_endianness - Function
 *
 * Description: Checks the endianness.
 *
 * Return: 0 if big endian.
 *         1 if little endian.
 */
int get_endianness(void)
{
	int num = 1;
	char *endianness = (char *)&num;

	return (endianness[0]);
}
