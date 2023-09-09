#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table array
 * Return: a pointer to newly created hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	/*create table*/
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	if (table->array == NULL)
		return (NULL);
	/*set aarray elemsnts to Null*/
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
