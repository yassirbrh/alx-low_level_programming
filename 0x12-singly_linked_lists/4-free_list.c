#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Function
 *
 * Description: Frees a list_t list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: No return because it's a void function.
 */
void free_list(list_t *head)
{
	list_t *node, *prev;

	node = head;
	while (node != NULL)
	{
		prev = node;
		node = node->next;
		free(prev->str);
		free(prev);
	}

}
