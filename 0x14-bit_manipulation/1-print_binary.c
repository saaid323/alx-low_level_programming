#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: int
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	while (mask != 0)
	{
		if (n & mask)
		{
			started = 1;
			_putchar('1');
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!started)
	{
		_putchar('0');
	}
}
