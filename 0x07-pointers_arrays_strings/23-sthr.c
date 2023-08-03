#include "main.h"
/**
 * _strchr - locates character in string
 * @s : the string
 *@c : the character
 *Return: returns pointer to first occurence of character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
