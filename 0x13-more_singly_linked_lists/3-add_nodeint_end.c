#include "lists.h"
/**
 * add_nodeint_end -add node at the end
 * @head : the node head
 * @n : the data
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodeint, *current;

	if (head == NULL)
		return (NULL);

	newnodeint = malloc(sizeof(listint_t));

	if (newnodeint == NULL)
		return (NULL);

	newnodeint->n = n;
	newnodeint->next = NULL;

	if (*head == NULL)
	{
		*head = newnodeint;
		return (newnodeint);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = newnodeint;

	return (newnodeint);
}
