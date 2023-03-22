#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int n = 4000000;
	long int a = 1;
	long int b = 2;
	long int sum;
	long result;

	for (int x = 1; x <= n; x++)
	{
		if (a % 2 != 0)
		{
			sum += a;
		}
		result = a + b;
		a = b;
		b = result;
	}
	printf("%d", sum);
	return (0);
}
