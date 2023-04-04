#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Description: Generates random valid passwords for the program 101-crackme
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, character;

	for (i = 90; i < 2772; i++)
	{
		if (2772 % i == 0)
		{
			character = i;
			break;
		}
	}
	for (i = 0; i < 2772 / character; i++)
	printf("%c", character);
	return (0);
}
