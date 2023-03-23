#include "main.h"
/**
*print_square - prints a straight line
*@n: the dimensionof the square
*
*/
void print_square(int n);
{
	int i, j, n;

	if (n <= 0)
	{
		putchar('\n');
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			putchar('#');
		}
		putchar('\n');

	}
	return (0);
}
