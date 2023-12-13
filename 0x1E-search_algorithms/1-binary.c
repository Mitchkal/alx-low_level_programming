#include "search_algos.h"
/**
 * binary_search - uses binary search to find value in sorted array
 * @array: the array
 * @size: the array size
 * @value: target value
 * Return: index where value stored
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R;
	size_t m = 0;

	if (!array)
		return (-1);

	R = size - 1;

	while (L <= R)
	{
		m = ((L + R) / 2);
		print_array(array, L, R);

		if (array[m] < value)
		{
			/* print_array(array, L, R);*/
			L = m + 1;
		}
		else if (array[m] > value)
		{
			/*print_array(array, L, R);*/
			R = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - prints an arrray
 * @S: start index
 * @E: end index
 * @array: Array
 */

void print_array(int *array, size_t S, size_t E)
{
	size_t i = S;

	printf("Searching in array: ");

	for (i = S; i <= E; ++i)
	{
		printf("%d", array[i]);
		if (i < E)
		{
			printf(", ");
		}
	}
	printf("\n");
}
