#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees listint_t and makes head NULL
 * @head: head of listint_t
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *pmt;

	if (head != NULL)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			pmt = tmp->next;
			free(tmp);
			tmp = pmt;
		}
		*head = NULL;
	}
}
