#include "hash_tables.h"
/**
 * hash_table_delete - dletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	hash_node_t *next;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			if (node->key != NULL)
				free(node->key);
			node->key = NULL;
			if (node->value != NULL)
				free(node->value);
			node->value = NULL;
			free(node);
			node = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
