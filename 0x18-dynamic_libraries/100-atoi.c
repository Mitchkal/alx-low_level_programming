#include "main.h"
/**
 *_atoi - converts string to integer
 *@s : the string
 * Return: returns theinteger or zero if no number in string
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	int result = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;

	}
	while (s[i] >= '0' && s[i] <= '9')
	{

		int result = result * 10 + (s[i] - '0');

		i++;


	}
	return (result * sign);

}
