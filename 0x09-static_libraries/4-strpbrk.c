#include "main.h"
/**
*_strpbrk -  locates the first occurrence in the string
*@s : the string1
*@accept : the string 2
*Return: returns the pointer to the byte or null if not found
*/
char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	char *ptr2;

	ptr = s;


	while (*ptr != '\0')
	{
		ptr2 = accept;

		while (*ptr2 != '\0')
		{
			if (*ptr == *ptr2)
			{
				return (ptr);
			}
			ptr2++;
		}
		ptr++;

	}

	return (NULL);
}

