#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the alphabets
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar((char)i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
