#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: the list head
 * @index: the list index to be returned
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;

	}
	return (NULL);
}
