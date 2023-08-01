#include "lists.h"

/**
 * free_listint_safe - freed a linked list
 * @h: point to the first node
 *
 * bu=y jamiu
 * Return: number of elements in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int diffe;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffe = *h - (*h)->next;
		if (diffe > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}

	*h = NULL;

	return (lent);
}
