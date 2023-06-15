#include "lists.h"

/**
 * add_dnodeint - Function
 *
 * Description: Adds a new node at the beginning of a dlistint_t list.
 *
 * @head: Pointer to the pointer to the head of dlistint_t list.
 * @n: The value to store in the node.
 *
 * Return: The address of the new node.
 *         NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
