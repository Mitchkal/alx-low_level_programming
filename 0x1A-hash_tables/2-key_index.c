#include "hash_tables.h"
/**
 * key_index - gives the key index
 * @key: the key string
 * @size: the size of hashtable array
 * Return: the key index; an unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size <= 0)
		return (0);

	index = hash_djb2(key);
	return (index % size);
}
