#include "lists.h"
#include <stdlib.h>
/**
 * list_len - Function that returns the number of elements in a linked
 *		list_t list
 *
 * @h: This is a point to the list_t
 *
 * Return: The numbers of elements
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
