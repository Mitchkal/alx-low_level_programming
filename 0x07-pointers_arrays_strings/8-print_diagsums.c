#include "main.h"
/**
*print_diagsums - printssumoftwodiagonalsofsquare matrix
*@a : the integers
*@size : the size of the square
*/

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;
	int **p;

	p = (int **) &a;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += (*p)[i * size + i];
		sum2 += (*p)[i * size + size - i - 1];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

