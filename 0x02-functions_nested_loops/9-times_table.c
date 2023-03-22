#include "main.h"

/**
 * times_table - prints the 9 times table
 */


void times_table(void)
{
	int i, j, result;

	for (i = 1; i <= 9; i++)
        {
            _putchar(0 + '0');
            _putchar(',');
            _putchar(' ');
            for (j = 1; j <= 9; j++)
            {
                result = i * j;
                
                if (result <= 9)
                {
                    _putchar(result % 10 + '0');
                    if (j < 9)
                    {
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
                    }
                }
                else
                {
                    _putchar(result / 10 + '0');
                    _putchar(result % 10 + '0');
                    if (j < 9)
                    {
                        _putchar(',');
                        _putchar(' ');
                    }
                }
                
                
            }
            _putchar('\n');
        }
}
