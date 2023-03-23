#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints the sum of the even-valued terms in fibonacci.
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib, prv_fib1, prv_fib2, sum;

	prv_fib1 = 0;
	prv_fib2 = 1;
	sum = 0;
	for (i = 0; i < 50; i++)
	{
		fib = prv_fib1 + prv_fib2;
		if (fib < 4000000)
		{
			if (fib % 2 == 0)
			sum += fib;
		}
		prv_fib1 = prv_fib2;
		prv_fib2 = fib;
	}
	printf("%lu\n",sum);
	putchar('\n');
	return (0);
}
