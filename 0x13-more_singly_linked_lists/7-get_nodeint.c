#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: point to head
 * @index: index of the node
 * Return: Return nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0; /* counter */

	while (head != NULL)
	{
		if (cnt == index)
			return (head);

		head = head->next;
		cnt++;
	}

	return (NULL);
}
