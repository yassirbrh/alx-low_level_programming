#include <unistd.h>
/**
 * main- Entry point
 *
 * Description: Prints the exact string with new line to the standard error.
 *
 * Return: 0 (Success)
 */

int main(void)
{

	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return 1;
}
