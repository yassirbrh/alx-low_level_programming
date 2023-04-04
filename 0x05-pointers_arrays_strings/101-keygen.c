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
	int i;

	for (i = 0; i < 2772 / 65; i++)
	printf("%c", 65);
	printf("%c", 2772 % 65);
	return (0);
}
