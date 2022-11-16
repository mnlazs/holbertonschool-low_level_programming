#include "lists.h"

/**
 * print_dlistint_backward - function
 * @h: pointer to doubly linked list
 * Description: inserting new node into a doubly linked list
 * Return: address of new node or NULL if failed
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count;
	if (h == NULL)
	return (0);

	while (h->next)
		h = h->next;
	for (count = 0; h; count++, h = h->prev)
		printf("%i/n", h->n);
	return (count);
}
