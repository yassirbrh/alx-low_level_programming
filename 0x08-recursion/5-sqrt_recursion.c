#include "main.h"
/**
 * _sqrt - Function
 *
 * Description: Returns the natural square root of a number.
 *
 * @n: The number
 * @base: The base to check for the square root
 *
 * Return: The natural square root of a number.
 */
int _sqrt(int n, int base)
{
	if (n == 0 || n == 1)
	return (n);
	if (n < 0)
	return (-1);
	if (base * base == n)
	return (base);
	if (base * base > n)
	return (-1);
	return (_sqrt(n, base + 1));
}
/**
 * _sqrt_recursion - Function
 *
 * Description: Returns the natural square root of number recursively.
 *
 * @n: The number.
 *
 * Return: The natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 2));
}
