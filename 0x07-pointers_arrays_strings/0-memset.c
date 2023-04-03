#include "main.h"

/**
 * _memset - Function
 *
 * Description: Fills memory with a constant byte.
 *
 * @s: Pointer to the string to set
 * @b: The constant byte to fill the memory with.
 * @n: number of bytes of the memory to fill.
 *
 * Return: Pointer to the string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
