#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:  the size of the array
 * Return: a pointer to the newly created hash table else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_table_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
