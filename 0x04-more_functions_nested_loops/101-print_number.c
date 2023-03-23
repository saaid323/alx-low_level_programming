#include "main.h"
#include<stdlib.h>

/**
 * negative - prints negative integer
 * @n: integer argument
 */

void negative(int n)
{
	int y;

	y = abs(n);
	_putchar('-');
	if (y < 10)
	{
		_putchar(y + '0');
	}
	else if (y >= 10 && y < 100)
	{
		_putchar(y / 10 + '0');
		_putchar(y % 10 + '0');
	}
}

/**
 * print_number - prints an integer
 * @n: integer argument
 */
void print_number(int n)
{
	if (n < 0)
	{
		negative(n);
	}
	else if (n >= 100 && n < 1000)
	{
		int x;

		x = n / 10;
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 1000)
	{
		int x;
		int y;

		x = n / 10;
		y = x / 10;
		_putchar(x / 100 + '0');
		_putchar(y % 10 + '0');
		_putchar(x % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
