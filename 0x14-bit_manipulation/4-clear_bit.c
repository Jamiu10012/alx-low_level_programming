#include "main.h"

/**
 * clear_bit - Turn the value of a given bit = 0
 * @n: point number to change
 * @index: index
 * Return: return 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
