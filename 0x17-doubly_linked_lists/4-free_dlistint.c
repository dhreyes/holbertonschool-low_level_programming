#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: beginning of dlistint_t
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while(head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
