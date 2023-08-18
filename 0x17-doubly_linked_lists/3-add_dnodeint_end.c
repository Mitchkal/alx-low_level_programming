#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: points to first node
 * @n: the data
 * Return: Address of last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temporary;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	if (*head == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	temporary = *head;
	while (temporary->next != NULL)
		temporary = temporary->next;
	newnode->n = n;
	temporary->next = newnode;
	newnode->prev = temporary;
	newnode->next = NULL;
	return (newnode);
}


