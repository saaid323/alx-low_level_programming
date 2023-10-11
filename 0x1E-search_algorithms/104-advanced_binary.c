#include "search_algos.h"

/**
* advanced_binary - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: return the index where value is located
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, i;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		size_t mid = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		if (array[mid] < value)
			l = mid + 1;
		if (array[mid] > value)
			r = mid;
		if (array[mid] == value)
		{
			if (array[mid - 1] == value)
				r = mid;
			else
				return (mid);
		}
	}
	return (-1);
}
