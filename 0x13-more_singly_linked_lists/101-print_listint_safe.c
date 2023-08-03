#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: the list head
 * Return: number of nodes or exitswith 98 if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	if (head == NULL)
		exit(98);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			while (slow != head)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(0);
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
	}
	count++;

	return (count);
}
