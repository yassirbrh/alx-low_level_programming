#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Function
 *
 * Description: Deletes the node at index @index of a listint_t linked list.
 *
 * @head: Pointer to a pointer to a linked list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded.
 *        -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *tmp;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (idx == index - 1)
		{
			tmp = node->next;
			node->next = tmp->next;
			free(tmp);
			return (1);
		}
		node = node->next;
		idx++;
	}
	return (-1);
}
