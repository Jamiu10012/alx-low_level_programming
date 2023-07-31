#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert nod at any index
 * @head: head
 * @idx: Index of the list
 * @n: value
 * Return: Return address of new node or NUll
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int v;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n; /* set the data n of the new node */
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	for (v = 0; v < idx - 1; v++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
