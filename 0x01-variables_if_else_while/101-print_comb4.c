#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (x = j + 1; x <= 9; x++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');
				if (i == 7 && j == 8 && x == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
