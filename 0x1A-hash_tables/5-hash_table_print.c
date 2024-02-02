#include "hash_tables.h"

/**
 * hash_table_print - function to print key-value pairs in a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char buffer = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (buffer == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			buffer = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
