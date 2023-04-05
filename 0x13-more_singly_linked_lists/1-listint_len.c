#include "lists.h"

/**
 * listint_len returns the number of elements in a linked lists
 * @h is the traversed linked list of type listint_t
 * return: is the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
