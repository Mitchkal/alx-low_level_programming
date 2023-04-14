#include "main.h"
#include <stdlib.h>

/**
* array_range - creates integer array
* @min : the minimum integer
* @max : the maximuminteger
* Return: return pointer to new array
*/

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	i = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}

