#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Function that frees a list_t list
 *
 * @head: This is a pointer to the first element of the list_t list
*/
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
