#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l, m;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == 57 && j == 57)
			{
				break;
			}
			m = 0;
			for (k = i; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (m == 0)
					{
						l = j + 1;
						m = 1;
					}
					if (i != k || j != l)
					{
					if ((i != 57 || j != 57 || k != 57 || l != 57) && (i != 48 || j != 48 || k != 48 || l != 49))
					{
						putchar(',');
						putchar(' ');
					}
					putchar((char)i);
					putchar((char)j);
					putchar(' ');
					putchar((char)k);
					putchar((char)l);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
