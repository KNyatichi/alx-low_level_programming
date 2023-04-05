#include "lists.h"

/**
 * @head: has a pointer to the listint_t list to be freed
 * free_listint2 -it frees a linked list
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
