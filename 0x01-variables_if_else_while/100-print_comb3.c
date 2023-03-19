#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j > i)
			{
				putchar((char)i);
				putchar((char)j);
				if (i != 57 || j != 57)
				 {
		                 	putchar(',');
				       	putchar(' ');
				 }
			}
		}
	}
	putchar('\n');
	return (0);
}
