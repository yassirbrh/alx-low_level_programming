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

	srand(time(NULL));
	character = rand() % 100;
	if (character < 65)
	{
		while (character < 65)
		character += 65;
	}
	for (i = 0; i < 2772 / character; i++)
	printf("%c", character);
	printf("%c", 2772 % character);
	return (0);
}
