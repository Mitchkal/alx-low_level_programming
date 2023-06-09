#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head : the list head
 * Return: pointer to first node of revresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;
	return (*head);
}
