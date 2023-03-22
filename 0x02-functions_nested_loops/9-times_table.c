#include "main.h"
/**
 * times_table - Function
 *
 * Description: Prints the 9 times table, starting with 0.
 *
 * Return: no return because it's a void function
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j != 0)
			{
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			}
			else
			{
				_putchar(res + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
