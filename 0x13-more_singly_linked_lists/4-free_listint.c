#include "lists.h"

/**
 * free_listint - it frees a linked list
 * @head: is the listint_t list to be freed
 */
 
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
