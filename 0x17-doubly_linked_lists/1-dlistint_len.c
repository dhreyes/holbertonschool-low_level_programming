#include "lists.h"
/**
 * dlistint_len - finds len of dlinked list
 * @h: start of dlinked list
 * Return: len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
