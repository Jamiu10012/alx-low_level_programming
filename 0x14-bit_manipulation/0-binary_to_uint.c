#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: variable for binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			out = out * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (out);
}
