#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the node of thr list
 * @head: head of the list
 * Return: return data or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n; /* get the data of the head */

	*head = (*head)->next;

	free(temp);

	return (data);
}
