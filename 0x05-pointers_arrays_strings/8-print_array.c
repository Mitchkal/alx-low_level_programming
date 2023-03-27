#include "main.h"

/**
*print_array - prints array elements followed by a new line
*@a : The array
*@n : the length of the array
*/

void print_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		k = a[i];

		printf("%d", k);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
