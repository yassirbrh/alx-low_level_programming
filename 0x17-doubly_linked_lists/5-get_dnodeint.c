#include "lists.h"
/**
 * get_dnodeint_at_index - Function
 *
 * Description: Returns the nth node of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to return.
 *
 * Return: The address of the node,
 *         NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
