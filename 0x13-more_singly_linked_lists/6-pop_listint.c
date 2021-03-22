#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes first element in listint_t
 * @head: head of listint_t
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (head)
	{
		if (*head)
		{
			tmp = (*head)->next;
			n = (*head)->n;
			free(*head);
			*head = tmp;
		}
	}
	return (n);
}
