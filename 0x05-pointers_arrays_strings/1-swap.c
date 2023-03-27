#include "main.h"

/**
*swap_int - swaps the values of two integers
*@a : swapped values
*@b : swapped value
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
