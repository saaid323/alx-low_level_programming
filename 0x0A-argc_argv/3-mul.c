#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: int argument
 * @argv: pointer to a string
 * Return: return 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			total *= atoi(argv[i]);
		}
		printf("%d\n", total);
	}
	else
		printf("Error\n");
	return (0);
}
