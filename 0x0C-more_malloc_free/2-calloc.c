#include "main.h"
#include <stdlib.h>
#include <string.h>
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

	array = (void *) malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	/*zero-initialize memory*/
	memset(array, 0, nmemb * size);

	return (array);

}
