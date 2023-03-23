#include "main.h"
/**
 * print_times_table - Function
 *
 * Description: Prints the n times table, starting with 0.
 *
 * @n: The integer parameter of the function
 *
 * Return: No return because it's a void function
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, res;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
				_putchar('0');
				else
				{
					_putchar(' ');
					if (res > 99)
					{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
					}
					if (res < 100 && res > 9)
					{
					_putchar(' ');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
					}
					if (res < 10)
					{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
					}
				}
				if (j != n)
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
