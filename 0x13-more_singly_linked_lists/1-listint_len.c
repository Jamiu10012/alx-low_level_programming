#include "lists.h"

/**
 * listint_len - the lenght of the linked list
 * @h: type of the listint to trav
 * Return: nodes number
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
