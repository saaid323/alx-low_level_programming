#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @i: The integer
 *
 * Return: Always return 0 (success)
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
	{
		k = -1 * k;
	}
	_putchar(k + '0');
	return (k);
}
