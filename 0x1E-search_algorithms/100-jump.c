#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: return the first index where value is located or -1
*/

int jump_search(int *array, size_t size, int value)
{
	unsigned int i, start = 0, end = 0;

	if (array == NULL)
		return (-1);
	while (array[end] < value)
	{
		printf("Value checked array[%d] = [%u]\n", array[end], end);
		start = end;
		end += sqrt(size);
		if (start > size)
			break;
	}
	printf("Value found between indexes [%u] and [%u]\n", start, end);
	for (i = start; i <= end; i++)
	{
		if (i > size - 1)
			break;
		printf("Value checked array[%d] = [%u]\n", array[i], i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
