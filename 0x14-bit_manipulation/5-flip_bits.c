#include "main.h"

/**
 * flip_bits - COUNT the number
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, cnt = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		curr = excl >> v;
		if (curr & 1)
			cnt++;
	}

	return (cnt);
}
