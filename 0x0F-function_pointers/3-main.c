#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  * @argc: argument count
  * @argv: array
  *
  * Return: returns 0
  */
int main(int argc, char *argv[])
{
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);

	if (!oper)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oper(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
