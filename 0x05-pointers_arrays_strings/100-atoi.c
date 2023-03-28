#include "main.h"
/**
 * _atoi - Function
 *
 * Description: Converts a string to an integer
 *
 * @s: Pointer to the string
 *
 * Return: The integer from the string
 */
int _atoi(char *s)
{
	int integer, i, numOfMinus, j;

	i = 0;
	numOfMinus = 0;
	integer = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			j = i;
			i = 0;
			while(i < j)
			{
				if (*(s + i) == '-')
				numOfMinus++;
				i++;
			}
			while (*(s + i) > 47 && *(s + i) < 58)
			{
				if (integer == 0)
				integer += *(s + i) - 48;
				else
				integer = (integer * 10) + *(s + i) - 48;
				i++;
			}
			break;
		}
		i++;
	}
	if (numOfMinus % 2 == 1)
	integer = -integer;

	return (integer);
}
