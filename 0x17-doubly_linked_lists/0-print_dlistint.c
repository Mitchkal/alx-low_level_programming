#include "lists.h"
/**
 * print_dlistint -prints elements in a list
 * @h: pointers to head on first noe
 * Return: no of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
