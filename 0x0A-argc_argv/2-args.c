#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all arguments it receives.
 *
 * @argc: The number of arguments passed into the program.
 * @argv: The array of arguments passed into the program.
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
