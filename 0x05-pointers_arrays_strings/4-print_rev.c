#include "main.h"

/**
*_print_rev - prints a string in reverse, followed by a new line
*@s : The string to be reversed
*/

void _print_rev(char *s)
{
	char g;
	int i;
	char st[strlen(s) + 1];

	strcpy(st, str);

	for (i = strlen(st); i >= 0; i--)
	{
		g = st[i];

		_putchar(g);
	}
	_putchar('\n');
}
