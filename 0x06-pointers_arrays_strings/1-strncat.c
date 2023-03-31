#include <main.h>
/**
 * _strcat - joins two strings
 *@dest : the destination string
 *@src : the source string
 * Return: returns the pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

