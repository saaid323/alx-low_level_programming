#include <stdio.h>

/**
* main - prints _putchar followed by new line
* Return: Always 0 (success)
*/
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');

	return (0);
}
