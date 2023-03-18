#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Prints the last digit of number
 *
 * Return : (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int mod = n % 10;

	if (mod > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, mod);
	}
	else if (mod == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}
	return (0);
}