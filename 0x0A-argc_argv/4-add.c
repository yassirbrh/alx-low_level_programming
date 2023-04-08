#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -Entry point
 *
 * Description: Adds positive numbers.
 *
 * @argv: The array of arguments passed into the program.
 * @argc: The number of arguments.
 *
 * Return: 0 (Success)
 *         1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc == 1)
	printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
		if (!isdigit(argv[i][0]))
		{
		printf("Error\n");
		return (1);
		}
		else
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
