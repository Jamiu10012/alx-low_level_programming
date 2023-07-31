#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add node to the end of list
 * @head: Head of the list
 * @n: value
 * Return: return success or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL) /* conditional statement */
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newnode;
	}

	return (newnode);
}
