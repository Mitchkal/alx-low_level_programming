#include "main.h"
/**
 * _strncpy - copy string
 *@src : the string source
 *@dest: the destination
 *@n : the string length
 * Return: returns the destination
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;


	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
return (dest);

}
