#include "main.h"
/**
* _strstr -  finds the first occurrence of needle in thehaystack
*@needle : the needle string
*@haystack : the haystack
*Return: Returns the needle or nothing
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);

	}
	return (NULL);
}
