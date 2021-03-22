#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - return nth node of listint_t
 * @head: head of list
 * @index: index of required node
 * Return: nth node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cnode = head;
	unsigned int idx = 0;

	while (cnode != NULL)
	{
		if (idx == index)
			return (cnode);
		idx++;
		cnode = cnode->next;
	}
	return (NULL);
}
