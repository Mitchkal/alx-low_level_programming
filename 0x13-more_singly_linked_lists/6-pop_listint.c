#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head : the list head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{

	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	*head = (*head)->next;

	n = current->n;

	free(current);

	return (n);
}
