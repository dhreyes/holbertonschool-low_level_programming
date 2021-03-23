#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at specified index
 * @head: head of listint_t
 * @idx: index of the list where the new node should be added
 * @n: new node
 * Return: address of new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *cnode;
	unsigned int x = 0;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}
	if (*head != NULL)
	{
		cnode = *head;
		while (cnode != NULL && x < (idx - 1))
		{
			cnode = cnode->next;
			x++;
		}
		if (x == idx - 1)
		{
			nnode->next = cnode->next;
			cnode->next = nnode;
			return (nnode);
		}
	}
	return (NULL);
}
