#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
