#include "main.h"

/**
 * get_endianness - look
 * Return: 0 for big, 1 for little.
 * by jamiu
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *x = (char *) &v;

	return (*x);
}
