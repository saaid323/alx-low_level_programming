#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the value
 * @index: is the index, starting from 0 of the bit you want to se
 * Return: is the index, starting from 0 of the bit you want to set
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
