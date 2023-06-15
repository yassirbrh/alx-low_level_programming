#include "lists.h"
/**
 * free_dlistint - Function
 *
 * Description: Frees a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 *
 * Return: No return because it's a void function.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
