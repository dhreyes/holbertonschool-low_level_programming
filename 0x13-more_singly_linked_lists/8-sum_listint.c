#include "lists.h"
/**
 * sum_listint - sums all nodes in listint_t
 * @head: head of listint_t
 * Return: sum of nodes in listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
