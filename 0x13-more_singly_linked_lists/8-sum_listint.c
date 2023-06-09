#include "lists.h"
/**
 * sum_listint - sums all data in aloinked list
 * @head: the list head
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
