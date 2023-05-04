#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char c[64];
	int i = 0;

	if (!n)
		return (-1);
	while (n > 0)
	{
		c[i] = n % 2;
		n = n / 2;
		i++;
	}
	return (c[index]);
}
