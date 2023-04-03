#include "main.h"
/**
* _memcpy - copy bytesfrommemory area src to dest
* @dest : the destination
* @src : the source
* @n : the number of times to copy
* Return: Returns the destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	*ptr;
	ptr = dest;

	while (n--)
	{
		*ptr++ = *src++;
	}

	return (dest);

}
