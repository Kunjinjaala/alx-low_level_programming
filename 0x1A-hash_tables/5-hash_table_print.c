#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from ht
 *
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t  *bucket;
	int print_comma = 0;
	unsigned long int index = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		bucket = ht->array[index];
		while (bucket)
		{
			if (print_comma)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			print_comma = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}

