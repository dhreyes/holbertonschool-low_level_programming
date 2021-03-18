#include "lists.h"
/**
 * list_len - find length of elements in list_t
 * @h: head of node list
 * Return: length of linked nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
