#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: interger argument
 * Return: Always 0
 */

int i, j, result;
    int n = 12;
    for (i = 0; i <= n; i++)
        {
                putchar(0 + '0');
                if (i < n)
                {
                        putchar(',');
                        putchar(' ');
                        putchar(' ');
                        putchar(' ');
                }
        }
        putchar('\n');

    for (i = 1; i <= n; i++)
        {
            putchar(0 + '0');
            for (j = 1; j <= n; j++)
            {
                result = i * j;

                if (result <= 9)
                {
                    if (j <= 9)
                    {
                        putchar(',');
                        putchar(' ');
                        putchar(' ');
                        putchar(' ');
                    }
                    putchar(result % 10 + '0');
                }
                else if (result >= 10 && result < 99)
                {
                    putchar(',');
                    putchar(' ');
                    putchar(' ');
                    putchar(result / 10 + '0');
                    putchar(result % 10 + '0');
                }
                else if (result > 99)
                {
                    int y = result % 10;
                    int z = result / 10;
                    putchar(',');
                    putchar(' ');
                    putchar(z / 10 + '0');
                    putchar(z % 10 + '0');
                    putchar(y + '0');
                }


            }
            putchar('\n');
        };

    return 0;

