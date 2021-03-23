#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index in listint_t
 * @head: head node
 * @index: index of listint_t
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nnode, *cnode;
	unsigned int idx;

	if (head == NULL)
		return (-1);
	idx = 0;
	nnode = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = nnode->next;
		free(nnode);
		return (1);
	}
	while (idx != index)
	{
		cnode = nnode;
		nnode = nnode->next;
		if (nnode == NULL)
			return (-1);
		idx++;
	}
	cnode->next = nnode->next;
	free(nnode);
	return (1);
}
