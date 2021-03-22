#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees listint_t
 * @head: head of list
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
