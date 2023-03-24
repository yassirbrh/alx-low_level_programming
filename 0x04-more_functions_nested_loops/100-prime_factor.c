#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints the largest prime factor of 612852475143
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned long int i, n;

	i = 2;
	n = 612852475143;
	while (n > 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n = n / i;
				if (n == 1)
				printf("%lu", i);
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
