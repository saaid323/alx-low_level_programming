#include "search_algos.h"

/**
* interpolation_search -  searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: return the first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	unsigned int l = 0, h = size - 1, pos;

	if (array == NULL)
		return (-1);
	while (array[l] != array[h] && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%u] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			l = pos - 1;
		if (array[pos] < value)
			h = pos + 1;
	}
	printf("Value checked array[%u] is out of range\n", h);
	return (-1);
}
