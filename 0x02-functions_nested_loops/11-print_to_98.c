#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function
 *
 * Description: prints all natural numbers from n to 98.
 *
 * @n: The number that the function start from.
 *
 * Return: no return because it's a void function
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(", ");
			}
		}	
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("%d",n);
	}
	printf("\n");
}
