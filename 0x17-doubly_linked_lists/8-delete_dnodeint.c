#include "lists.h"
/**
 * delete_dnodeint_at_index - Function
 *
 * Description: Deletes the node at index index of a dlistint_t linked list.
 *
 * @head: Pointer to the pointer to the head of the linked list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if it succeeded,
 *         -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (index == 0 && node != NULL)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node != NULL)
	{
		if (i == index)
		{
			(node->prev)->next = node->next;
			(node->next)->prev = node->prev;
			free(node);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
