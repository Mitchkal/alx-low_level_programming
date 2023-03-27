#include "main.h"

/**
*puts2 - prints every other element in a string followed by a new line
*@str : The string to be reversed
*/

void puts2(char *str)
{

	unsigned int j;
	int k;

	for (j = 0; j <= strlen(str) + 1; j++)
	{
		k = str[j];

		if (j % 2 == 0)
		{
			_putchar(k);
		}


	}
	_putchar('\n');

}
