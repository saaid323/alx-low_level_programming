#include "main.h"

/**
 * times_table - prints the 9 times table
 */


void times_table(void)
{
	int i, j, result;

	
	for (i = 1; i <= 9; i++)
	{
		_putchar('0');
                _putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			result = j * i;

			if (result > 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
