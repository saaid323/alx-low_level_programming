#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;
	char c;
	int x;

	for (i = 97; i <= 122; i++)
	{
		c = i;
		putchar(c);
	}

	for (x = 65; x <= 90; x++)
	{
		c = x;
		putchar(c);
	}
	printf("\n");
	return (0);
}
