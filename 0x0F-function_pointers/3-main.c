#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point
 *
 * Description: Outputs the result of a calculation.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: The array of arguments passed to the program.
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int) = get_op_func(argv[2]);
	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
