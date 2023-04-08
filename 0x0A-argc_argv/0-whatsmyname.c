#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints its name, followed by a new line.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array to the arguments of the program.
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
