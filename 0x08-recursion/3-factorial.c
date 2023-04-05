#include "main.h"
/**
 * factorial - Function
 *
 * Description: Returns the factorial of a given number.
 *
 * @n: The given number.
 *
 * Return: The factorial of the given number.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
