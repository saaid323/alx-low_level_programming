#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 4000000;
	int sum = 0;
	int a = 1, b = 2;

	while (b < n)
	{
		int temp = b;

		if (b % 2 == 0)
		{
			sum += b;
		}

		b += a;
		a = temp;
	}
	printf("%d", sum);
	return (0);
}
