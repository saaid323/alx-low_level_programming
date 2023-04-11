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
	int arr[] = {25, 10, 5, 2, 1};
	int i;
	int total = 0;
	int n = atoi(argv[1]);

	if (argc <= 1)
	{
		printf("0\n");
	}
	else if (argc != 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (n >= arr[i])
			{
				n -= arr[i];
				total++;
			}
		}
		printf("%d\n", total);
	}

	return (0);
}
