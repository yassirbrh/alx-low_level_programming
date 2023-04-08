#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Multiplies two numbers.
 *
 * @argc: The number of arguments.
 * @argv: The array of arguments passed into the program.
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[2]) - atoi(argv[1]);
		printf("%d\n", mul);
	}
	else
	printf("Error\n");
	return (0);
}
