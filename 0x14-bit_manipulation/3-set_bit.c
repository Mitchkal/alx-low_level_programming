#include "main.h"
/**
 * set_bit -sets value of bitto 1at given index
 * @n : the integer
 * @index : the given index
 * Return: 1 if it works, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*set bit at position*/
	*n |= (1ul << index);

	return (1);
}
