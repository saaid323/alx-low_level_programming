#include <stdio.h>

/**
 * main - Entry point
 * Return: Always
 */

int main(void)
{
	int total, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}

	}
	printf("%d\n", total);

	return (0);
}
