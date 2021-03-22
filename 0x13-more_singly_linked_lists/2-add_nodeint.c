#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds new node at beginning of listint_t
 * @head: head of list
 * @n: n added to listint_t
 * Return: address of new element, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
