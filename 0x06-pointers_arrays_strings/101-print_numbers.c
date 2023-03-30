#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer argument
 */

void print_number(int n)
{
	int num = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n >= 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
