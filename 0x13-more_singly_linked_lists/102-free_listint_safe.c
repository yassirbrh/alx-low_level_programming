#include "lists.h"
#include <stdlib.h>
/**
 * listint_len_safe - Function
 *
 * Description: Returns the length of the linked list.
 *
 * @head: Pointer to the linked list.
 *
 * Return: The length of the linked list.
 */
size_t listint_len_safe(listint_t *head)
{
	listint_t *node = (listint_t *)head, *tmp_node;
	size_t nodes = 0, tmp_nodes;

	while (node != NULL)
	{
		nodes++;
		tmp_nodes = 0;
		tmp_node = (listint_t *)head;
		while (tmp_nodes < nodes)
		{
			if (tmp_node == node->next)
				return (nodes);
			tmp_nodes++;
			tmp_node = tmp_node->next;
		}
		node = node->next;
		if (head == NULL)
			exit(98);
	}
	return (nodes);
}
/**
 * free_listint_safe - Function
 *
 * Description: Frees a listint_t list.
 *
 * @h: Pointer to a pointer to a listint_t linked list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = listint_len_safe(*h);
	listint_t *node, *prev;
	size_t length = 0;

	node = *h;
	while (length < len)
	{
		prev = node;
		node = node->next;
		free(prev);
		length++;
	}
	*h = NULL;
	return (len);
}
