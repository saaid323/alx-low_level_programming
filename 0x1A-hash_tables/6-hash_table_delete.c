#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *new_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			temp = new_node;
			new_node = new_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
