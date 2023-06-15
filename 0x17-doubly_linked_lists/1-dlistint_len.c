#include "lists.h"

/**
 * dlistint_len - Function
 *
 * Description: Returns the number of elements in a linked dlistint_t list.
 *
 * @h: Pointer to the linked list dlistint_t.
 *
 * Return: The number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *node = (dlistint_t *)h;
	size_t number_of_elements = 0;

	while (node != NULL)
	{
		number_of_elements++;
		node = node->next;
	}
	return (number_of_elements);
}
