#include "lists.h"
/**
 * print_dlistint - prints elements of dlistint_t
 * @h: node to start on
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (counter);
}
