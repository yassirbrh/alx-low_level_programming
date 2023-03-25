#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib, prv_fib1, prv_fib2;

	prv_fib1 = 0;
	prv_fib2 = 1;
	for (i = 0; i < 98; i++)
	{
		fib = prv_fib1 + prv_fib2;
		if (i == 49)
		printf("%lu", fib);
		else
		printf("%lu, ", fib);
		prv_fib1 = prv_fib2;
		prv_fib2 = fib;
	}
	putchar('\n');
	return (0);
}
