#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given index
 * @head : the node head
 * @idx: the index
 * @n: the data
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *newnodeint;

	if (head == NULL)
		return (NULL);

	newnodeint = malloc(sizeof(listint_t));

	if (newnodeint == NULL)
		return (NULL);

	newnodeint->n = n;

	if (idx == 0)
	{
		newnodeint->next = *head;
		*head = newnodeint;
		return (newnodeint);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newnodeint->next = current->next;
			current->next = newnodeint;
			return (newnodeint);
		}
		current = current->next;
		i++;
	}
	free(newnodeint);
	return (NULL);
}
