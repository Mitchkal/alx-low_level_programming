#include "main.h"
/**
  * flip_bits - gets number of bits one should flip to get other number
  * @n: the first number
  * @m: the second number
  * Return: the number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count = 0;

	diff = n ^ m;
	while (diff != 0)
	{
		if ((diff & 1) == 1)
			count++;
		diff >>= 1;
	}
	return (count);
}
