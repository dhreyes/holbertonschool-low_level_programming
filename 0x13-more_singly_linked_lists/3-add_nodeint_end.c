#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds new node to end of listint_t
 * @head: start of listint_t
 * @n: new node value
 * Return: address of new node, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));
	listint_t *cnode = *head;

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
		*head = nnode;
	else
	{
		while (cnode->next != NULL)
		{
			cnode = cnode->next;
		}
		cnode->next = nnode;
	}
	return (nnode);
}
