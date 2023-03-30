#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer argument
 */


void print_number(int n)
{	
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}
	if (n >= 0)
	{
		if (n > 10 && n < 100)
		{
			_putchar(n / 10 + '0');
		}
		if (n > 100 && n < 1000)
		{
			int m = n / 10;

			_putchar(n / 100 + '0');
			_putchar(m % 10 + '0');
		}
		if (n > 1000)
		{
			int m = n / 100;
			int k = n / 10;

			_putchar(m / 10 + '0');
			_putchar(m / 100 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar(n % 10 + '0');
	}
}
