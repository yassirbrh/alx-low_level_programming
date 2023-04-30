#include "lists.h"
/**
 * listint_len - Function
 *
 * Description: Returns the number of elements in a linked listint_t list.
 *
 * @h: Pointer to a listint_t list.
 *
 * Return: The number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	listint_t *node = (listint_t *)h;

	while (node != NULL)
	{
		length++;
		node = node->next;
	}
	return (length);
}
