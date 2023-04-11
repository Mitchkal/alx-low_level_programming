#include "main.h"
/**
* _strdup - returns duplicate pointer of string
* @str : the string
* Return: Returns Null or pointer
*/
char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	i = 0;

	if (str == NULL)
		return (NULL);

	str2 = malloc(sizeof(char) * (strlen(str) + 1));

	if (str2 == NULL)
		return (NULL);

	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0'; /*add null terminator*/
	return (str2);
}
