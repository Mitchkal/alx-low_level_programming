#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head : the list head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
}
