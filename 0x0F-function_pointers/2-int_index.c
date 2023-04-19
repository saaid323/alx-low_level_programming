
/**
 * int_index - searches for an integer
 * @array: pointerto an array
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: If no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*n)(int) = cmp;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (n(array[i]))
			{
				return (i);
			}
			if (i == size - 1 && !n(array[i]))
			{
				return (-1);
			}
		}
	}
	return (0);
}
