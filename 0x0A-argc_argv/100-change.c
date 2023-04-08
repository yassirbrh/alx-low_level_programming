#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints the minimum number of coins to make change for an amount
 *              of money.
 *
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 (Success)
 *         1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, coins;
	unsigned int i;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	cents = atoi(argv[1]);
	while (cents != 0)
	{
		if (cents >= 25)
		cents -= 25;
		else if (cents >= 10)
		cents -= 10;
		else if (cents >= 5)
		cents -= 5;
		else if (cents >= 2)
		cents -= 2;
		else if (cents >= 1)
		cents--;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
