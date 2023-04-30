#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Function
 *
 * Description: Frees a listint_t list.
 *
 * @head: Pointer to a pointer to a listint_t list.
 *
 * Return: No return because it's a void function.
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
	free(*head);
}
