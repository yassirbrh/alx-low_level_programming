#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar((char)i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
