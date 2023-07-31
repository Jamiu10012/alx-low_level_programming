#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free the list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *nextn;

	curr = head;

	while (curr != NULL) /* tranverse the list and free each node in the list */
	{
		nextn = curr->next;
		free(curr);
		curr = nextn;
	}
}
