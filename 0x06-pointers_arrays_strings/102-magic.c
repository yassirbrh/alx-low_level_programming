#include <stdio.h>
/**
 * main - Function
 *
 * Description: getting 98 as result of a[2]
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 11/2) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
