#include "lists.h"
/**
 * list_len - Function
 *
 * Description: Returns the number of elements in a linked list_t list.
 *
 * @h: Pointer to the head node of list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t length;
	list_t *head_ptr;

	head_ptr = (list_t *)h;
	length = 0;

	while (head_ptr != NULL)
	{
		length++;
		head_ptr = head_ptr->next;
	}

	return (length);
}
