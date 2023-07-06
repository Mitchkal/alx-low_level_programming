#include "main.h"
/**
 * get_bit - gets value of a bit at agiven index
 * @n: the number
 * @index:the index
 * Return: the value of the bit at the index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);

}
