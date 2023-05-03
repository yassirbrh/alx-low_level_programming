#include "lists.h"
/**
 * find_listint_loop - Function
 *
 * Description: Finds the loop in a linked list.
 *
 * @head: Pointer to a linked list.
 *
 * Return: The address of the node where the loop starts.
 *         NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *firstNode = head, *secondNode = head;

	while (firstNode != NULL)
	{
		firstNode = firstNode->next;
		if ((secondNode->next)->next == NULL || secondNode->next == NULL)
			return (NULL);
		secondNode = (secondNode->next)->next;
		if (firstNode == secondNode)
		{
			secondNode = head;
			while (firstNode != secondNode)
			{
				firstNode = firstNode->next;
				secondNode = secondNode->next;
			}
			return (firstNode);
		}
	}
	return (NULL);
}
