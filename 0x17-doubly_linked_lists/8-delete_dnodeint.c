#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at specified index
 * @head: beginning of list
 * @index: position of node to delete
 * Return: 1 if success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *free_node, *previous_node, *next_node;
	unsigned int idx = 1;

	free_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(free_node);
		return (1);
	}

	while (free_node->next)
	{
		previous_node = free_node;
		free_node = free_node->next;
		if (idx == index)
		{
			next_node = free_node->next;
			previous_node = next_node;
			next_node->prev = previous_node;
			free(free_node);
			return (1);
		}
		idx++;
	}

	return (-1);

}
