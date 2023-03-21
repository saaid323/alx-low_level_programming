#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int j;

		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		int x;

		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
