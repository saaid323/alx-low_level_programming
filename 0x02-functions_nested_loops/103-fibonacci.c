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
		if (b % 2 == 0)
		{
			sum += b;
		}
		int temp = b;

		b += a;
		a = temp;
	}
	printf("%ld", sum);
	return (0);
}
