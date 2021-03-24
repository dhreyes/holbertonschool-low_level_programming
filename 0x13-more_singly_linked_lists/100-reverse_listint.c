#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses list
 * @head: head node
 * Return: reversed head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *body, *tail;

	body = *head;
	if (body == NULL)
		return (NULL);
	tail = body->next;
	body->next = NULL;
	while (tail != NULL)
	{
		body = tail;
		tail = tail->next;
		body->next = *head;
		*head = body;
	}
	return (*head);
}
