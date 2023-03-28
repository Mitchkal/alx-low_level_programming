#include "main.h"

/**
*rev_string - prints a string in reverse, followed by a new line
*@s : The string to be reversed
*/
void rev_string(char *s)
{
	char *st;
	int i;
	unsigned int j;
	unsigned int len;

	len = strlen(s);
	st = (char *) malloc((len + 1) * sizeof(char));

	if (st == NULL)
	{
		return;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		st[i] = s[i];
	}
	st[i] = '\0';
	for (j = 0; j < len; j++)
	{

		_putchar(s[j]);
	}
	_putchar('\n');

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(st[i]);
	}
	_putchar('\n');
	free(st);
}

