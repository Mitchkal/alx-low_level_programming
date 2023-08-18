#include "lists.h"
/**
 * add_dnodeint- add node at beginning of list
 * @head: pointer to the head
 * @n: the data
 * Return: Null or address of new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
	newnode->n = n;
	newnode->next = *head;/*address pointing to new node*/
	newnode->next->prev = newnode;/*back link*/
	newnode->prev = NULL;
	*head = newnode;/*new head*/
	return (newnode);
}
