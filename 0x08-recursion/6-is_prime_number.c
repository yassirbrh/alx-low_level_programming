#include "main.h"
/**
 * divisor - Function
 *
 * Description: Returns the first divisor that it finds.
 *
 * @n: The number.
 * @div: The divisor.
 *
 * Return: The first divisor that it finds.
 */
int divisor(int n, int div)
{
	if (n % div == 0)
	return (div);
	else
	return (divisor(n, div - 1));
}
/**
 * is_prime_number - Function
 *
 * Description: Check if @n is a prime number.
 *
 * @n: The number.
 *
 * Return: Returns 1 if the input integer is a prime number.
 *         Otherwise return 0.
 */
int is_prime_number(int n)
{
	if (divisor(n, n - 1) != 1)
	return (0);
	else
	return (1);
}
