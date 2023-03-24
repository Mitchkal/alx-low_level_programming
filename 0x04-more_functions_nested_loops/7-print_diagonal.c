#include "main.h"
/**
*print_diagonal - prints a diagonal line
*@n: the length of the line
*
*/
void print_diagonal(int n);
{
	int i, j, n;

	if (n <= 0)
	{
		_putchar('\n');
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('$')
		_putchar('\n');
	}
	return (0);
}
