#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node at a certain index in a linked
 *  list
 * @head: is the first node in the linked list
 * @index: is the index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
