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
	listint_t *node = (listint_t *)head;
	int nodes = 0;

	if (node == NULL)
		exit(98);
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		nodes++;
		if (node->next  != node - 2 && node->next != NULL)
		{
			printf("-> [%p] %d\n", (void *)node->next, (node->next)->n);
			nodes++;
			break;
		}
		node = node->next;
	}
	return (nodes);
}
