#include "main.h"
/**
* str_concat - joins two strings
* @s1 : string 1
* @s2 : string 2
* Return: returns the joined string or null
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *str;

	i = 0;
	j = 0;
	k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (str == NULL)
		return (NULL);

	while (s1[k])
	{
		str[i] = s1[k];
		i++;
		k++;
	}

	k = 0;

	while (s2[j])
	{
		str[i]	= s2[j];
		i++;
		j++;
	}

	str[i] = '\0';
	return (str);
}
