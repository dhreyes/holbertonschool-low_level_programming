#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the inputted list_t
 * @head: inputted list
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
