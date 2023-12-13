#include "search_algos.h"
/**
 * linear_search - uses linear search to find val in array
 * @array: the array
 * @size: the array size
 * @value: the value
 * Return: first index where val is stotred
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
