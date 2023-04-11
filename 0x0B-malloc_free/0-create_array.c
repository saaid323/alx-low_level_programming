#include "main.h"
/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char
 * @size: size of the array
 * @c: the array
 * Return: returnsa pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		char *ptr = malloc(sizeof(c) * size);

		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}

