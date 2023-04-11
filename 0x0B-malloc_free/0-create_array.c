#include "main.h"
/**
* create_array - creates an array of characters
* @size : the size ofthe array
* @c : the character
* Return: pointer to array, null if 0 size or fail
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);

}
