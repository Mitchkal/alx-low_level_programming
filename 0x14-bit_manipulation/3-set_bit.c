#include "main.h"
/**
 * set_bit - sets value of bit to one at index
 * @index: the index starting from o of bit to seti
 * @n: the number
 * Return: i if it works, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1ul << index);
	return (1);
}
