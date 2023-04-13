#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a mem space
 * @b: the bbyte size
 * Return: pointeto the memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
