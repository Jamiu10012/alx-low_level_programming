#include "main.h"

/**
 * print_binary - display the binary equivalent to decimal
 * @n: value
 */

void print_binary(unsigned long int n)
{
	unsigned long int siz = sizeof(unsigned long int) * 8;
	unsigned long int msk = 1UL << (siz - 1);

	int beg = 0;

	while (msk > 0)
	{
		if ((n & msk) == 0)
		{
			if (beg)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			beg = 1;
		}

		msk >>= 1;
	}

	if (!beg)
		_putchar('0');
}
