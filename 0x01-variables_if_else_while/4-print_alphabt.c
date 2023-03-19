#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except e and q
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if ((char)i != 'q' && (char)i != 'e')
			putchar((char)i);
	}
	putchar('\n');
	return (0);
}
