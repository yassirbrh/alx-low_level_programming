#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Function
 *
 * Description: Returns a pointer to the function that corresponds
 *              to the operator given as a parameter.
 *
 * @s: The operator.
 *
 * Return: Pointer to the function of operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
