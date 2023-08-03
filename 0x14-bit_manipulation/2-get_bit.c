#include "main.h"

/**
 * get_bit - show  the value of a bit at an index in a decimal
 * @n: number in for search
 * @index: index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int out;

	if (index > 63)
		return (-1);

	out = (n >> index) & 1;

	return (out);
}
