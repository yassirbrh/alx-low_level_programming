#include "lists.h"
/**
 * reverse_listint - Function
 *
 * Description: Reverses a listint_t linked list.
 *
 * @head: Pointer to a pointer to a listint_t linked list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *tmp_head;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	next = (*head)->next;
	(*head)->next = NULL;
	tmp_head = next->next;
	next->next = *head;
	if (tmp_head != NULL)
		*head = tmp_head;
	else
	{
		*head = next;
		return (*head);
	}
	while ((*head)->next != NULL)
	{
		tmp_head = (*head)->next;
		(*head)->next = next;
		next = *head;
		*head = tmp_head;
	}
	(*head)->next = next;
	return (*head);
}
