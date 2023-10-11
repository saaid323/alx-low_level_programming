#include "search_algos.h"

/**
* search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @left: minimum index
* @right: maximum index
* @x: value
* Return: return the index where value is located
*/
int search(int array[], int left, int right, int x)
{
	int i;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == x)
			return (mid);
		if (array[mid] < x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
* exponential_search - searches for a value in a sorted array of integers
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: return the index where value is located
*/

int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound = 1, i, last;

	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		i = bound;
		printf("Value checked array[%u] = [%u]\n", bound, array[bound]);
		bound *= 2;
	}
	last = bound < size ? bound : size - 1;
	printf("Value found between indexes [%u] and [%u]\n", i, last);
	return (search(array, bound / 2, last, value));
}
