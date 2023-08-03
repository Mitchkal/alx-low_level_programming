#include "main.h"
/**
 * get_bit - gets a bit at a given index
 * @index: the index
 * @n : the integer
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
