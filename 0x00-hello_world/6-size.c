#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int size_char = sizeof(char);
	int size_int = sizeof(int);
	int size_long_int = sizeof(long int);
	int sizelong_long_int = sizeof(size long long int);
	int  size_float =  sizeof(float);
	
	puts("Size of a char: %d byte(s)", size_char);
	puts("Size of a int: %d byte(s)", size_int);
	puts("Size of a long int: %d byte(s)", size_long_int);
	puts("Size of a long long int: %d byte(s)", sizelong_long_int);
	puts("Size of a float: %d byte(s)", size_float);
	return (0);
}
