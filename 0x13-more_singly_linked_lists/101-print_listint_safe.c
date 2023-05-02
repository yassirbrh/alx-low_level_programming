#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - Function
 *
 * Description: Prints a listint_t linked list.
 *
 * @head: Pointer to the linked list.
 *
 * Return: The number of nodes.
 *         98 if the function fails.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *node = (listint_t *)head, *tmp_node;
	int nodes = 0, tmp_nodes;

	if (node == NULL)
		exit(98);
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		nodes++;
		tmp_nodes = 0;
		tmp_node = (listint_t *)head;
		while (tmp_nodes < nodes)
		{
			if (tmp_node == node->next)
			{
				printf("-> [%p] %d\n", (void *)tmp_node, tmp_node->n);
				return (nodes);
			}
			tmp_nodes++;
			tmp_node = tmp_node->next;
		}
		node = node->next;
	}
	return (nodes);
}
