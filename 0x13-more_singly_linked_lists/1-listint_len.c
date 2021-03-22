#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements in list
 * @h: header of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
