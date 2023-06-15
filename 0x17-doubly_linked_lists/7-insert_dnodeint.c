#include "lists.h"
/**
 * insert_dnodeint_at_index - Function
 *
 * Description: Inserts a new node at a given position.
 *
 * @h: Pointer to the pointer to the head of the dlistint_t list.
 * @idx: The position to add the element to.
 * @n: The value to store in the node.
 *
 * Return: The address of the new node,
 *         NULL if it failed or the index doesn't exist.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (node != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = node->prev;
			new->next = node;
			node->prev = new;
			(new->prev)->next = new;
			return (new);
		}
		node = node->next;
		i++;
	}
	if (i == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);

}
