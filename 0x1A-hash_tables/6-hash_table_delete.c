#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * This function deletes a hash table, freeing all memory allocated for it,
 * including the hash table itself and all nodes in its buckets.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
	return;

	for (unsigned long int index = 0; index < ht->size; index++)
	{
	hash_node_t *current = ht->array[index];
	while (current != NULL)
	{
		hash_node_t *temp = current;
		current = current->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	}

	free(ht->array);
	free(ht);
}
