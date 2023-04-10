#include <stdio.h>

/**
 * main - Entry point
 * @argc: int argument
 * @argv: pointer to a string
 * Return: returns 0 (succes)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
