#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Detle the node at giving index
 * @head: head node
 * @index: index of th node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev_node;
	unsigned int v;

	if (*head == NULL) /* empty list, deletion failed condition */
		return (-1);

	if (index == 0)
	{
		/*  if first node need to be deleted */
		curr = *head;
		*head = curr->next;
		free(curr);
		return (1);
	}

	/* code to find the node befor the one to delete */
	curr = *head;
	for (v = 0; curr != NULL && v < index; v++)
	{
		prev_node = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	/* unlink the node from list and free it */
	prev_node->next = curr->next;
	free(curr);
	return (1);
}
