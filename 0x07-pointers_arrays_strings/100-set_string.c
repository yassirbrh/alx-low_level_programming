#include "main.h"
/**
 * set_string - Function
 *
 * Description: Sets the value of pointer to a char.
 *
 * @s: Pointer to a pointer to char
 * @to: Pointer to char
 *
 * Return: No return because it's a void function.
 */
void set_string(char **s, char *to)
{
	**s = *to;
}
