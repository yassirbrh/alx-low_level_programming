#include "main.h"
#include <string.h>
/**
 * infinite_add - Function
 *
 * Description: Adds two numbers based on strings
 *
 * @n1: Pointer to the string of the first number
 * @n2: Pointer to the string of the second number
 * @r: the buffer that the function will use to store the result
 * @size_r: The buffer size
 *
 * Return: @r the result of addition
 *         0 if the result can't be stored in r
 *         or n1 or n2 is empty
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1, len_n2, len_res, i, n1_digit, n2_digit, buff;

	len_n1 = strlen(n1);
	len_n2 = strlen(n2);
	len_n1++;
	len_n2++;
	if (len_n1 >= len_n2)
	len_res = len_n1 + 1;
	else
	len_res = len_n2 + 1;
	if (size_r < len_res || strlen(n1) == 0 || strlen(n2) == 0)
	return (0);
	buff = 0;
	for (i = 0; i < len_res - 1; i++)
	{
		if (len_n1 - i - 2 < 0)
		n1_digit = 0;
		else
		n1_digit = n1[len_n1 - i - 2] - '0';
		if (len_n2 - i - 2 < 0)
		n2_digit = 0;
		else
		n2_digit = n2[len_n2 - i - 2] - '0';
		r[i] = (char)('0' + ((n1_digit + n2_digit + buff) % 10));
		buff = (n1_digit + n2_digit + buff) / 10;
	}
	r[len_res - 1] = '\0';
	while (r[len_res - 2] == '0')
	{
		len_res--;
		r[len_res - 1] = '\0';
	}
	for (i = 0; i < ((len_res - 1) / 2) + ((len_res - 1) % 2); i++)
	{
		buff = r[i];
		r[i] = r[len_res - i - 2];
		r[len_res - i - 2] = buff;
	}
	return (r);
}
