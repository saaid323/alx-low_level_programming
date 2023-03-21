#include <stdio.h>

/**
 * main - Entery point
 * Return: 0 Always
 */

int main(void)
{
	long int i, a, b, result;

	a = 1;
	b = 2;
	for (i = 0; i <= 49; i++)
	{
		if (i == 49)
		{
			printf("%ld", a)
		}
		printf("%ld, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
