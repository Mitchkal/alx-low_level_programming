#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *current = NULL;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				printed = 1;
				current = current->next;
			}
			i++;
		}
		printf("}\n");
	}
}
