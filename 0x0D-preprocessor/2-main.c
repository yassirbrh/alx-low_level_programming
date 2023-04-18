#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: Prints the name of the file it was compiled from.
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, index;

	index = -1;
	for (i = strlen(__FILE__) - 1; i >= 0; i--)
	{
		if (*(__FILE__ + i) == '/' || *(__FILE__ + i) == '\\')
		{
			index = i;
			break;
		}
	}
	for (i = index + 1; i < (int)strlen(__FILE__); i++)
	printf("%c", *(__FILE__ + i));
	printf("\n");
	return (0);
}
