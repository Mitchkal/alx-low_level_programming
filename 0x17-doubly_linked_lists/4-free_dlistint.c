#include "lists.h"
/**
 * free_dlistint - frees the double linked list
 * @head: points to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}

