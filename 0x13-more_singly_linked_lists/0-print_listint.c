#include "lists.h"

/**
 * @h links are those of type listint_t to print
 * print_listint function prints all the elements of a linked list
 * Returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
