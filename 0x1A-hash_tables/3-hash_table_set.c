#include "hash_tables.h"

/**
 * hash_table_set - add or update ht key value
 * @ht: A pointer to the hash table
 * @key: The key to add
 * @value: The value of the key
 * Return: 1 on success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new, *current;
    char *value_copy;
    unsigned long int index, i;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    for (i = index, current = ht->array[i]; current; i++, current = current->next)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = value_copy;
            return (1);
        }
    }

    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }

    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(value_copy);
        free(new);
        return (0);
    }

    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    return (1);
}

