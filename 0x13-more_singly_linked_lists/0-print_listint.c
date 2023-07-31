#include "lists.h"

/**
 * print_listint - Display all the ellements in a linklist
 * @h: Type of listint to print
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}

	return (num_node);
}
