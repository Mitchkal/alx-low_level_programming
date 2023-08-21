#include "main.h"
/**
*_strcmp - check the code
*@s1 : string one
*@s2 : string two
*Return: Returns the ASCII difference.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
