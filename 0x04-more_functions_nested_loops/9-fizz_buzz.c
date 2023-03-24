#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints the numbers from 1 to 100
 *              Fizz for multiples of 3
 *              Buzz for multiples of 5
 *              and FizzBuzz for multiples of both
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			printf("FizzBuzz");
			else
			printf("Fizz");
		}
		else if (i % 5 == 0)
		printf("Buzz");
		else
		printf("%d", i);
		if (i < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
