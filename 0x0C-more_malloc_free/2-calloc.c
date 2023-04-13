#include "main.h"
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb : number of elements in aray
 * @size : byte sizeof each element
 * Return: returns pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	return (array);

}
