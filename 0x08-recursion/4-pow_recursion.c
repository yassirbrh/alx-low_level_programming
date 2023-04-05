#include "main.h"
/**
 * _pow_recursion - Function
 *
 * Description: Returns the value of x raised to the power of y.
 *
 * @x: Base number.
 * @y: The exponent.
 *
 * Return: @x raised to the power @y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	if (y == 1)
	return (x);
	else
	return (x * _pow_recursion(x, y - 1));
}
