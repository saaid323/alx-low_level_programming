#include "search_algos.h"

/**
* recursive - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @l: index of the left integer
* @r: index of the right integer
* @value: the value to search for
* Return: return the index where value is located
*/

int recursive(int *array, int l, int r, int value)
{
	int mid, i;

	if (r >= l)
		mid =  (r + l) / 2;
	else
		return (-1);
	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
	if (array[mid] == value)
	{
		if ((mid == 0) || (array[mid - 1] != value))
			return (mid);
		else
			return (recursive(array, l, mid, value));
	}
	if (array[mid] > value)
		return (recursive(array, l, mid - 1, value));
	return (recursive(array, mid + 1, r, value));
}


/**
* advanced_binary - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: return the index where value is located
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;

	if (array == NULL)
		return (-1);
	return (recursive(array, l, r, value));
}
