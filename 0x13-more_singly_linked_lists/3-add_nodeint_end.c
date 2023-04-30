#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Function
 *
 * Description: Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to a pointer to a listint_t list.
 * @n: Integer to add to the list.
 *
 * Return: The address of the new element.
 *         NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	*head = new;
	node = *head;
	while (node->next != NULL)
	node = node->next;
	if (*head != new)
	node->next = new;
	return (new);
}
