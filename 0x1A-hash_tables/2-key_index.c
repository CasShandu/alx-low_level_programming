#include "hash_tables.h"

/**
 * key_index - key or value index where pair should be stored
 * @key: key of index
 * @size: size of array of hash table
 * Return: index key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
