#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the number of arguments passed into it.
 *
 * @argc: The number of arguments passed into the program.
 * @argv: The array to the arguments.
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[argc - 1] != NULL)
	printf("%d\n", argc - 1);
	return (0);
}
