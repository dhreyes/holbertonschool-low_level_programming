#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds new node at beginning of list_t
 * @head: header node
 * @str: unchanging string to be added
 * Return: address of new element, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode = malloc(sizeof(list_t));
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
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
