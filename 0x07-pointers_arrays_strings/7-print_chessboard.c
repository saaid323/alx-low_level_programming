#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i != ' ' && j != ' ')
			{
				printf("%c", a[i][j]);
			}
			else
			{
				putchar(' ');
			}
		}
		if (i == ' ')
		{
			putchar(' ');
		}
		printf("\n");
	}
}
