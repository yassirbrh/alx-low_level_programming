#include "lists.h"
#include <stdio.h>
/**
 * print_list - Function
 *
 * Description: Prints all the elements of a list_t.
 *
 * @h: Pointer to the head in the linked list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	list_t *head_ptr;
	size_t length;

	head_ptr = (list_t *)h;
	length = 0;
	while (head_ptr != NULL)
	{
		length++;
		if (head_ptr->str == NULL)
		head_ptr->len = 0;
		printf("[%d] ", head_ptr->len);
		if (head_ptr->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", head_ptr->str);
		head_ptr = head_ptr->next;
	}
	return (length);
}
