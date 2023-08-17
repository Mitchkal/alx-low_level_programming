#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node
 * @head: points to first node
 * @index: index of node
 * Return: Null or current node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes;
	dlistint_t *current_node;

	current_node = head;
	for (nodes = 0; current_node != NULL; nodes++)
	{
		if (nodes == index)
			return (current_node);
		current_node = current_node->next;
	}
	return (NULL);
}
