#include "hash_tables.h"
/**
 * hash_table_get - retrieves value of key fromhash table
 * @ht: the hash table
 * @key: the key
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx = 0;
	char *_value = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			_value = strdup(current->value);
			if (_value == NULL)
				return (NULL);
			return (_value);
		}
		current = current->next;
	}
	return (NULL);
}
