#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 1; x < 10; i++)
		{
			putchar((i % 10) + '0');
			putchar((x % 10) + '0');
			if (i == 8 && x == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
