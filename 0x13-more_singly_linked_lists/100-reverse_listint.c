#include "lists.h"

/**
 * reverse_listint - Reverse a node in list
 * @head: POint to node head
 * Return: A Pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		/* move head to the next */
		*head = next;
	}

	*head = prev_node;
	return (*head);
}
