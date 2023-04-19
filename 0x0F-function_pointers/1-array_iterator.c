#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array : the array
 * @size : the array size
 * @action : the action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
