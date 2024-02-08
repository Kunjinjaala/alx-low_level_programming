#include "hash_tables.h"

/**
 * key_index - gets the index of a key in a hash table
 *
 * @key: the key
 *
 * @size: size of the hash table's array
 *
 * Return: index where key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return hash_djb2(key) % size;
}
