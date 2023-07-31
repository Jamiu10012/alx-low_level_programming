#include "lists.h"

/**
 * sum_listint - Add all node in the list
 * @head: head pointer
 * Return: return sum of the data or 0
 */

int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n; /* add the data together */
		head = head->next;
	}

	return (sum_data);
}
