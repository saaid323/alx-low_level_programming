#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: int
 */

void print_binary(unsigned long int n)
{
	int binary_digits[64];
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		binary_digits[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary_digits[j] + '0');
	}
}
