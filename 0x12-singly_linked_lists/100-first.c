#include <stdio.h>
/**
 * before_main - Function
 *
 * Description: Prints some output before the main function is executed.
 *
 * Return: No return becaue it's a void function.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
