#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Function
 *
 * Description: Adds a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to a pointer to a listint_t list.
 * @n: The integer to add in the list.
 *
 * Return: The address of the new element.
 *         NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}
