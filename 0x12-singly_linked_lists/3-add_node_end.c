#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Function
 *
 * Description: Adds a new node at the end of a list_t list.
 *
 * @head: Pointer to the pointer to the head node of list.
 * @str: String to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *to_the_end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	to_the_end = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (to_the_end->next != NULL)
			to_the_end = to_the_end->next;
		to_the_end->next = new;
	}
	new->next = NULL;
	new->str = malloc(sizeof(char) * (strlen(str) + 1));
	if (new->str != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	free(to_the_end);
	return (new);
}
