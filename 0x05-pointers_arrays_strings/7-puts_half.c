#include "main.h"

/**
*puts_half - prints second halfo of a string followed by a new line
*@str : The string to be reversed
*/

void puts_half(char *str)
{

	unsigned int j;
	int k;
	unsigned int length;

	for (j = 0; j < strlen(str); j++)
	{
		k = str[j];
		length = strlen(str);


		if (length % 2 == 0)
		{
			if (j >= length / 2)
			{
				_putchar(k);
			}
		}
		else
		{
			if (j >= ((length - 1) / 2) - 1)
			{
				_putchar(k);
			}
		}


	}
	_putchar('\n');

}
