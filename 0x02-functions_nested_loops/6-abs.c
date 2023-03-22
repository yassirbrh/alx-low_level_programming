#include "main.h"
/**
 * _abs - function
 *
 * Description: function that computes the absolute value of an integer.
 *
 * @n: stores the number.
 *
 * Return: n (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
