#include <stdio.h>

/**
 * main - Entery point
 * Return: 0 Always
 */

int main(void)
{
	int i, a, b;

	for (i = 0, sum = 0; a < 4000000; i++)
	{
		printf("%d, ", a);
		b = a + b;
		a = b - a;
	}
	return (0);
}
