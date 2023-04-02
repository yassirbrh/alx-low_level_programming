#include "main.h"
/**
 * print_buffer - Function
 *
 * Description: Prints a buffer
 *
 * @b: Pointer to the buffer
 * @size: size of bytes should be printed
 *
 * Return: No return because it's a void function
 */
void print_buffer(char *b, int size)
{
	int i, j;

	i = 0;
	if (size < 1)
	printf("\n");
	while (i < size)
	{
		if (i % 10 == 0)
		{
			if (i != 0)
			printf("\n");
			printf("%08x:", i);
		}
		if (i % 2 == 0)
		printf(" ");
		printf("%02x", b[i]);
		if (i == size - 1)
		{
			if (size % 10 != 0)
			{
				for (j = i + 1; j < (size / 10 * 10) + 10; j++)
				{
					printf("  ");
					if (j % 2 == 0)
					printf(" ");
				}
			}
		}
		if (i % 10 == 9 || i == size - 1)
		{
			printf(" ");
			for (j = (i / 10) * 10; j <= i; j++)
			{
				if ((b[j] >= '\0' && b[j] <= '\7') || b[j] == '\n')
				b[j] = '.';
				printf("%c", b[j]);
			}
		}
		i++;
	}
}
