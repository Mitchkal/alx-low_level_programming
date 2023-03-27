#include "main.h"

/**
*rev_string - prints a string in reverse, followed by a new line
*@s : The string to be reversed
*/

void rev_string(char *s)
{
	char g;
	int i;
	int j;
	int k;
	char st[strlen(s) + 1];

	strcpy(st, str);




	for (j = 0; j <= strlen(s) + 1; j++)
	{
		k = s[j];

		_putchar(k);


	}
	_putchar('\n');



	for (i = strlen(st); i >= 0; i--)
	{
		g = st[i];

		_putchar(g);
	}
	_putchar('\n');
}
