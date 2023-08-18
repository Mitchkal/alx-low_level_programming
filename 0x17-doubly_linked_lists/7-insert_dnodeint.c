#include "lists.h"
/**
 * *insert_dnodeint_at_index - insert new node at position
 * @h: points to first node
 * @idx: index to insert
 * @n: the data
 * Return: Nullor address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporary;
	dlistint_t *new_node;
	unsigned int nodes = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	temporary = *h;
	for (nodes = 0; nodes < idx - 1; nodes++)
	{
		temporary = temporary->next;
		if (temporary == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->n = n;
	new_node->next = temporary->next;
	temporary->next->prev = new_node;
	temporary->next = new_node;
	new_node->prev = temporary;
	return (new_node);
}
