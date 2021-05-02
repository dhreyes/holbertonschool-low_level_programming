#include "lists.h"
/**
 * sum_dlistint - sums the numbers in a double linked list
 * @head: start of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
