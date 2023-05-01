#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Function
 *
 * Description: Inserts a new node at a given position.
 *
 * @head: Pointer to a pointer to a listint_t linked list.
 * @idx: The index of the list where the new node should be added.
 *       Index starts at 0.
 * @n: Integer to add in the linked list.
 *
 * Return: The address of the new node.
 *         or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node = *head;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		if (node == NULL)
		{
			*head = new;
			new->next = NULL;
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	else
	{
		while (node != NULL)
		{
			if (index == idx - 1)
			{
				new->n = n;
				new->next = node->next;
				node->next = new;
				return (new);
			}
			node = node->next;
			index++;
		}
	}
	return (NULL);
}
