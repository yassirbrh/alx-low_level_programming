#include "stdio.h"
/**
 * main - Entry point
 *
 * Description: Cracking the code for crackme3.
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int v2 = 74215240;
	int v1 = 255;
	int v0 = 0;

	for (v0 = 0; v0 <= 3; v0++)
		printf("%c", (v1 & (unsigned int)(v2 >> ((char)(v0 << 3) & 31))));
}
