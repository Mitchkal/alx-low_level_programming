#include "main.h"
/**
 * clear_bit -clears  value of bitto 0 at given index
 * @n : the integer
 * @index : the given index
 * Return: 1 if it works, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*clear bit at position*/
	*n &= ~(1ul << index);

	return (1);
}
