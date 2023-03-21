#include "main.h"

/**
 *  print_sign - Prints the sign of a number
 *  @n: Returns 1 and prints + if n is greater than zero
 *  Return: Returns 1 and prints +
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
