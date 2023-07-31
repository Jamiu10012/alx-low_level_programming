#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Aadd new node at the first of the list
 * @head: Point to first node int the list
 * @n: the item to put in new node
 * Return: Return NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /* initialize */

	new = malloc(sizeof(listint_t));
	if (!new) /* conditional statement */
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
