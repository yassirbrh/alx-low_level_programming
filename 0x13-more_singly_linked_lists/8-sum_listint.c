#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Function
 *
 * Description: Returns the sum of all the data(n) of a listint_t linked list.
 *
 * @head: Pointer to a listint_t linked list.
 *
 * Return: the sum of all the data(n) of a listint_t linked list.
 *         0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
