#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node at index
 * @head: start of dlistint_t
 * @index: index to pull node from
 * Return: node at index, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);

		head = head->next;
		idx++;
	}
	return (NULL);
}
