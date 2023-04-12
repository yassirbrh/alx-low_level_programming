#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Function
 *
 * Description: Concatenates all the arguments of the program.
 *
 * @ac: Number of the arguments.
 * @av: Array of arguments.
 *
 * Return: Pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len_str;

	if (ac == 0 || av == NULL)
	return (NULL);
	len_str = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		j++;
		j++;
		len_str += j;
	}
	len_str++;
	str = malloc(sizeof(char) * len_str);
	if (str == NULL)
	return (NULL);
	i = 0;
	j = 0;
	while (i < len_str - 1)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			str[i] = av[j][k];
			k++;
			i++;
		}
		str[i] = '\n';
		j++;
		i++;
	}
	str[len_str - 1] = '\0';
	return (str);
}
