#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Function
 *
 * Description: Deletes the head node of a listint_t linked list.
 *
 * @head: Pointer to a pointer to a listint_t list.
 *
 * Return: The head node's data(n).
 *         0 if the linked list is empty;
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	h = *head;
	*head = (*head)->next;
	n = h->n;
	free(h);
	return (n);
}
