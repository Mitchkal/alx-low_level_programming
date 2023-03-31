#include "main.h"
/**
*string_toupper - convertsstring to uppercase
* @str: the string
*
* Return: return the string
*/
char *string_toupper(char *str)
{
	int delt = 'a' - 'A';
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= delt;
		}
		i++;
	}
	return (str);

}
