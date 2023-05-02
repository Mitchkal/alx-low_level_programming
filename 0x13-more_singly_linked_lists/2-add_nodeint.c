#include "lists.h"
/**
 * add_nodeint -add node at beginning
 * @head : the node head
 * @n : the data
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodeint;

	if (head == NULL)
		return (NULL);

	newnodeint = malloc(sizeof(listint_t));

	if (newnodeint == NULL)
		return (NULL);

	newnodeint->n = n;

	newnodeint->next = *head;
	*head = newnodeint;

	return (newnodeint);
}
