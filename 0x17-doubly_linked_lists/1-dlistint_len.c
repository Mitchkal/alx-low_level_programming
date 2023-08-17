#include "lists.h"
/**
 * dlistint_len- counts and returns elements in double link list
 * @h: points to first element
 * Return: No of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;
	const dlistint_t *temporary;

	temporary = h;

	while (temporary != NULL)
	{
		temporary = temporary->next;
		elements++;
	}
	return (elements);
}
