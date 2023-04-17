#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != '\0')
	length++;
	return (length);
}
int is_only_digit(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
	if (*(str + i) < '0' || *(str + i) > '9')
	return (0);
	i++;
	}
	return (1);
}
void *_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = ptr;
	size_t i;

	for (i = 0; i < num; i++)
	p[i] = (unsigned char)value;
	return (ptr);
}
void reverse(char *str)
{
	int i = 0, j = _strlen(str) - 1;
	char temp;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
char *string_add(char *n1, char *n2)
{
	int len_n1, len_n2, len_res, i, n1_digit, n2_digit, buff;
	char *r;

	len_n1 = _strlen(n1);
	len_n2 = _strlen(n2);
	len_n1++;
	len_n2++;
	if (len_n1 >= len_n2)
	len_res = len_n1 + 1;
	else
	len_res = len_n2 + 1;
	r = malloc(sizeof(char) * (len_n1 + len_n2 + 2));
	_memset(r, '0', len_n1 + len_n2);
	r[len_n1 + len_n2] = '\0';
	if (_strlen(n1) == 0 || _strlen(n2) == 0)
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
	reverse(r);
	return (r);
}
void op_org(char *t, char *u, char *arg1, char *arg2, int *fp, int *sp)
{
	t = arg1;
	u = arg2;
	*fp = _strlen(t);
	*sp = _strlen(u);
}
void errors(int argc, char *argv[])
{
	if (argc != 3 || is_only_digit(argv[1]) == 0 || is_only_digit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
}
int main(int argc, char *argv[])
{
	int sec_prod, first_prod, i, j, k, rem, l, m, mul;
	char *result, *top, *under, *mul_result;

	errors(argc, argv);
	result = malloc(sizeof(char) * (_strlen(argv[1]) + _strlen(argv[2]) + 2));
	mul_result = malloc(sizeof(char) * (_strlen(argv[1]) + _strlen(argv[2]) + 2));
	_memset(result, '0', _strlen(argv[1]) + _strlen(argv[2]) + 1);
	result[_strlen(argv[1]) + _strlen(argv[2]) + 1] = '\0';
	top = argv[1];
	under = argv[2];
	first_prod = _strlen(argv[1]);
	sec_prod = _strlen(argv[2]);
	if (_strlen(argv[1]) < _strlen(argv[2]))
	op_org(top, under, argv[2], argv[1], &first_prod, &sec_prod);
	_memset(mul_result, '0', _strlen(argv[1]) + _strlen(argv[2]) + 1);
	rem = k = l = m = 0;
	for (i = sec_prod - 1; i >= 0; i--)
	{
		_memset(mul_result, '0', m);
		l = m;
		rem = 0;
		for (j = first_prod - 1; j >= 0; j--)
		{
		mul = ((under[i] - '0') * (top[j] - '0')) + rem;
		mul_result[l] = (mul % 10) + '0';
		rem = mul / 10;
		l++;
		}
		mul_result[l] = rem + '0';
		mul_result[l + 1] = '\0';
		reverse(mul_result);
		result = string_add(result, mul_result);
		k++;
		m++;
	}
	printf("%s\n", result);
	free(result);
	free(mul_result);
	return (0);
}
