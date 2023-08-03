#include "main.h"

/**
*rev_string - prints a string in reverse, followed by a new line
*@s : The string to be reversed
*/

void rev_string(char *s)
{
	char g;
	int i;
	unsigned int j;
	int k;
	char *st;

	st = malloc(strlen(s) + 1);

	strcpy(st, s);

	for (j = 0; j <= strlen(s) + 1; j++)
	{
		k = s[j];

		_putchar(k);
	}
	_putchar('\n');

	for (i = strlen(st) - 1; i >= 0; i--)
	{
		g = st[i];

		_putchar(g);
	}
	_putchar('\n');
}
