#include "lists.h"
/**
 * sum_dlistint- sums data elemenyts in duble link list
 * @head: points to first element
 * Return: 0 or the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
