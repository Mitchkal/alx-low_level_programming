#include "main.h"
/**
 * _strchr - locates character in string
 * @s : the string
 *@c : the character
 *Return: returns pointer to first occurence of character
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;

	while (*ptr++)
	{
		if (*ptr == c)
			return (ptr);
	}
	return (NULL);
}
