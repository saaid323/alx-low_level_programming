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
	int i, j;
	int total = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = strtol(argv[i], &ptr, 10);
			if (*ptr)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				total += j;
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
