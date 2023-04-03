#include "main.h"
/**
 *_memset - prints characters in a amemory location
 *@b : the character
 *@s : the memory location
 *@n : the number of times to print
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	
	}
	return (s);
}
