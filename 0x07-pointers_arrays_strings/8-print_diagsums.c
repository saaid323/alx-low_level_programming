#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: pointer to array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	int total = 0, total1 = 0;
	
	for (i = 0; i < size; i++)
	{
		total += a[i * size + i];
		total1 += a[(i + 1) * size - (i + 1)];
	}
    
    printf("%d, %d\n", total, total1);
}
