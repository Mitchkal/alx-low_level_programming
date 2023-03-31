#include "main.h"
/**
 * _strncat - joins two strings
 *@dest : the destination string
 *@src : the source string
 *@n : the length
 * Return: returns the pointer to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (dest[i])
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

