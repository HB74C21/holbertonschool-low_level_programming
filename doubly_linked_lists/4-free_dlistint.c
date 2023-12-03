#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Function that frees a dlistint_t list
 *
 * @head: this is a pointer to the first element of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
