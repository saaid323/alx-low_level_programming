#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 98;
	int a = 1, b = 2;

	while (a < n)
	{
		int temp = a;

		printf("%d\n", a);
		a += b;
		b = temp;
	}
	return (0);
}
