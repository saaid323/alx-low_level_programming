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

	for (i = 97; i <= 122; i++)
	{
		c = i;
		putchar(c);
	}
	printf("\n");
	return (0);
}
