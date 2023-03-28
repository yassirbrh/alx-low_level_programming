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
	char *password, rand_char;
	int i, j;

	j = 0;
	password = malloc(8);
	while (j < 10)
	{
		i = 0;
		while (i < 8)
		{
			srand(time(NULL) + 1);
			rand_char = rand() % 256 + 1;
			*(password + i) =  (char)rand_char;
			i++;
		}
		printf("%s\n", password);
		j++;
	}
	return (0);
}
