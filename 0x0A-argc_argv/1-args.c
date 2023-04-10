#include <stdio.h>

/**
 * main - Entery point
 * @argc: int argument
 * @argv: pointer to a string
 * Return: return 0 Always (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
