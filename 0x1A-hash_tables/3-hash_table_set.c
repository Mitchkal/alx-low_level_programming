#include "hash_tables.h"
/**
 * create_item - creates dict item and adds to hash tabe
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * @idx: the index
 * Return: 0 or 1 for pass
 */

int create_item(hash_table_t *ht, const char *key, const char *value,
		unsigned long int idx)
{
	char *_key;
	char *_value;

	hash_node_t *item = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!item)
		return (0);

	_key = strdup(key);
	if (!_key)
	{
		free(item);
		return (0);
	}

	_value = strdup(value);
	if (!_value)
	{
		free(_key);
		free(item);
		return (0);
	}
	item->key = _key;
	item->value = _value;

	if ((ht->array)[idx] == NULL)
		item->next = NULL;/*make items next pointer tobe null*/
	else
		item->next = (ht->array)[idx];/*poiny items next to idx */

	ht->array[idx] = item;/*insert item to array*/
	return (1);
}
/**
 * hash_table_set - adds element to hash table
 * @ht: the hash table
 * @key: the key; cannot be empty
 * @value: the value of the key; can be empty
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *current_item = NULL;
	char *_value;

	if (!ht || !ht->array || !key || !value)
		return (0);

	/*compute index*/
	idx = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[idx];/*contents at hash idx*/

	while (current_item && strcmp(key, current_item->key) != 0)
	{/*current_item exists and there is no collission*/
		current_item = current_item->next;/*increment*/
	}

	if (current_item != NULL)
	{
		_value = strdup(value);
		if (_value == NULL)
			return (0);
		if (current_item->value)
			free(current_item->value);
		current_item->value = _value;/*replace value*/
		return (1);
	}

	return (create_item(ht, key, value, idx));
}
