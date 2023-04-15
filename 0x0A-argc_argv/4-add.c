#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - Entery point
 * @argc: int argument
 * @argv: pointer to a string
 * Return: return 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	bool error;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				error =  true;
				break;
			}
			else
			{
				total += atoi(argv[i]);
			}
		}
	}
	if (error)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", total);
		return (0);
	}
}
