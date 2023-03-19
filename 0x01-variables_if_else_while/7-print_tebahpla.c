#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
