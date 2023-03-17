#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Outputs the size of every data type in two different architectures 32 and 64 bit on linux
 *
 * Return: 0 (Success)
 */

int main(void)
{

	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of an int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",sizeof(long long int));
	printf("Size of a float: %d byte(s)\n",sizeof(float));	
	return (0);

}
