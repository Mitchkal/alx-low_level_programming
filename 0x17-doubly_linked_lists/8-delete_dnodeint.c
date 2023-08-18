#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at index
 * @head: pointer to first node
 * @index: node index to delete
 * Return: -1 for failur, 1 for success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n;
	dlistint_t *temporary;
	dlistint_t *next;

	if (!head || !*head)
		return (-1);
	temporary = *head;
	if (index == 0)
	{
		*head = temporary->next;
		if (temporary->next)
			temporary->next->prev = NULL;
		/*temporary->prev = NULL;*/
		free(temporary);
		return (-1);
	}
	for (n = 0; n < index - 1; n++)
	{
		if (!temporary)
			return (0);
		temporary = temporary->next;
	}

	if (!temporary || temporary->next == NULL)
		return (-1);
	next = temporary->next->next;
	free(temporary->next);
	temporary->next = next;
	if (next)
		next->prev = temporary;
	return (1);
}
