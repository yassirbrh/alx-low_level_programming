#include "main.h"

/**
 * _isupper - Function
 *
 * Description: function that checks for uppercase character.
 *
 * @c: the character to check
 *
 * Return: 1 if c is uppercase
 *         0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
		return (1);
	}
	return (0);
}
