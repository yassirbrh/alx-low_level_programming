#include "main.h"
#include <stdlib.h>
/**
 * rev_string - Function
 *
 * Description: Reverses a string.
 *
 * @s: Pointer to a string
 *
 * Return: No return because it's a void function
 */
void rev_string(char *s)
{
	int i, j;
	char *str;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	str = malloc(sizeof(char) * i);
	for (j = 0; j <= i; j++)
	{
		str[j] = *(s + j);
	}
	j = 0;
	i--;
	while (i >= 0)
	{
		*(s + j) = str[i];
		j++;
		i--;
	}

}
