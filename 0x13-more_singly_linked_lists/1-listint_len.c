#include "lists.h"
/**
 * listint_len - find number of elements in a linked list
 * @h : the list pointer
 * Return: number of items in a linkedlist
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
