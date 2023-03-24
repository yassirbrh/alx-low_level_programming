#include "main.h"

/**
 * _isdigit - Function
 *
 * Description: function that checks for a digit (0 through 9).
 *
 * @c: the character to check
 *
 * Return: 1 if c is a digit
 *         0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
		return (1);
	}
	return (0);
}
