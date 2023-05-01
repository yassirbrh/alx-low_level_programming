#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Function
 *
 * Description: Returns the nth node of a listint_t linked list.
 *
 * @head: Pointer to a listint_t linked list.
 * @index: Index of the linked list node to return.
 *
 * Return: the nth node of a listint_t linked list.
 *         NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
