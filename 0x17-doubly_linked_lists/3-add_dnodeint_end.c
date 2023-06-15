#include "lists.h"

/**
 * add_dnodeint_end - Function
 *
 * Description: Adds a new node at the end of a dlistint_t list.
 *
 * @head: Pointer to the pointer to the head of the list.
 * @n: The value to store in the node.
 *
 * Return: The address of the new element.
 *         NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (node != NULL)
		{
			if (node->next == NULL)
			{
				node->next = new;
				new->prev = node;
				break;
			}
			node = node->next;
		}
	}
	return (new);
}
