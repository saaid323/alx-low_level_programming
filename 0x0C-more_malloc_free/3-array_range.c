#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: pointer to int
 * @max: pointer to int
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *c;

	if (min > max)
		return (NULL);

	c = malloc(sizeof(int) * (max - min + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min); i++)
	{
		c[i] = min + i;
	}
	c[i] = max;
	return (c);
}
