#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Free the list and set the head to null
 * @head: head of list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *curr, *nextn;

	curr = *head;

	while (curr != NULL)
	{
		nextn = curr->next;
		free(curr);
		curr = nextn;
	}

	*head = NULL;
}
