#include "lists.h"
#include <stdlib.h>

/**
 * print_dlistint - Function
 *
 * Description: Prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node = (dlistint_t *)h;
	int number_of_nodes = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
