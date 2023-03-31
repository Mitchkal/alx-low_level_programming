#include "main.h"

/**
 * rot13 - convert string to rot13
 * @s : the string
 * Return: Returns converted string
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;

		while (input[j])
		{
			if (s[i] == input[j])
			{
				s[i] = rot[j];
				break;

			}
			j++;
		}

		i++;

	}
	return (s);

}
