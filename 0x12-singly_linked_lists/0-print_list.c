#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of list_t
 * @h: head of list_t
 * Return: amount of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
