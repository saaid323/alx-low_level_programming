#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @x: int argument
 */

void print_times_table(int x)
{
	int i, j, k;

	for (k = 0; k <= x; k++)
	{
		printf("0 ");
	}
	printf("\n");
	for (i = 1; i <= x; i++)
	{
		printf("0 ");
		for (j = 1; j <= x; j++)
		{
			printf("%d", (i * j));
			if (j < x)
			{
				printf(", ");
			}
		}
		printf("\n");

	}
}
