#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2;

	printf("%d, %d", a, b);

	for (int i = 3; i <= 98; i++) 
	{
		int temp = a + b;

		printf(", %d", temp);
		a = b;
		b = temp;
	}
	printf("\n");
	return (0);
}
