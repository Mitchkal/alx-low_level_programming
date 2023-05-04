#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip fromnumber to another
 * @n : the integer
 * @m : the given index
 * Return: 1 if it works, or -1 if error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		if ((diff & 1) == 1)
			count++;

		diff >>= 1;
	}

	return (count);
}
