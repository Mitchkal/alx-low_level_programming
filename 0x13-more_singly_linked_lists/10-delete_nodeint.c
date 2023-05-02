#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given index
 * @head : the node head
 * @idx: the index
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
