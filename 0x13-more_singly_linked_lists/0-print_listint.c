#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Function
 *
 * Description: Prints all the elements of a listint_t list.
 *
 * @h: Pointer to a listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node = (listint_t *)h;
	size_t nodes = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		nodes++;
	}
	return (nodes);
}
