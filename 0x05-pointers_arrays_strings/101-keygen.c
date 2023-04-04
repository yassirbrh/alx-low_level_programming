#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Description: Generates random valid passwords for the program 101-crackme
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, j, number;
	char *chs = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *password = malloc(strlen(chs) + 1);

	srand(time(NULL));
	i = 0;
	j = 0;
	number = 2772;
	while (number != 0)
	{
		while (number < 0)
		{
			if (password[j] - 1 > 47 && password[j] - 1 < 58)
			{
				password[j] -= 1;
				number++;
			}
			else if (password[j] - 1 > 64 && password[j] - 1 < 91)
			{
				password[j] -= 1;
				number++;
			}
			else if (password[j] - 1 > 96 && password[j] - 1 < 123)
			{
				password[j] -= 1;
				number++;
			}
			j++;
			if (j == i)
			j = 0;
		}
		password[i] = chs[rand() % strlen(chs)];
		if (number != 0)
		number -= (int)password[i];
		i++;
	}
	password[i - 1] = '\0';
	printf("%s", password);
	return (0);
}
