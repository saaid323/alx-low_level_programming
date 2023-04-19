#include "function_pointers.h"
/**
 * array_iterator -  executes each element of an array
 * @array: pointer to an array
 * @size: size of the arry
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*n)(int) = action;

	for (i = 0; i < size; i++)
	{
		n(array[i]);
	}
}
