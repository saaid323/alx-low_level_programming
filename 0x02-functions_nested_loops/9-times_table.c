#include "main.h"

/**
 * times_table - prints the 9 times table
 */


void times_table(void)
{
	int i, j, result;

	for (i = 1; i <= 10; i++)
	{
		_putchar(0 + '0');
		if (i < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('\n');
	for (i = 1; i <= 9; i++)
	{
		_putchar(0 + '0');
		for (j = 1; j <= 9; j++)
		{
			result = i * j;
			if (result < 10)
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}

}
