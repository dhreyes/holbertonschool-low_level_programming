#include "lists.h"
/**
 * add_dnodeint_end - add node to end of dlistint_t
 * @head: node to start from
 * @n: number to add to new node
 * Return: the address of new element, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *change_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = NULL;
	new_node->n = n;

	change_node = *head;
	while (change_node->next)
	{
		change_node = change_node->next;
	}
	new_node->prev = change_node;
	change_node->next = new_node;

	return (new_node);
}
