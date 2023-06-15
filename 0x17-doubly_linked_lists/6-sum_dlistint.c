#include "lists.h"
/**
 * sum_dlistint - Function
 *
 * Description: Returns the sum of all the (n) of a dlistint_t linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the elements (n) of the linked list.
 *         0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
