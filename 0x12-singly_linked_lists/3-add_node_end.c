#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds new node at end of list_t
 * @head: current head
 * @str: string to store
 * Return: address, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode = malloc(sizeof(list_t));
	list_t *cnode = *head;
	int idx = 0;

	if (nnode == NULL)
		return (NULL);

	if (str == NULL)
	{
		nnode->str = NULL;
		nnode->len = 0;
	}
	else
	{
		nnode->str = strdup(str);
		while (str[idx])
		{
			idx++;
		}
		nnode->len = idx;
	}
	nnode->next = NULL;
	if (*head == NULL)
		*head = nnode;
	else
	{
		while (cnode->next != NULL)
			cnode = cnode->next;
		cnode->next = nnode;
	}

	return (nnode);
}
