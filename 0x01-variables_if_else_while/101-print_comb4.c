#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j > i && i < k && j < k)
				{
					putchar((char)i);
					putchar((char)j);
					putchar((char)k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
