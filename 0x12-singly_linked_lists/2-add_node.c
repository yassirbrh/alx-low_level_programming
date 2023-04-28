#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Function
 *
 * Description: Adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to the pointer to the node
 * @str: String to add.
 *
 * Return: Pointer to the new element.
 *         NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->next = *head;
	*head = new;
	new->str = malloc(sizeof(char) * (strlen(str) + 1));
	if (new->str != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}
	return (*head);
}
