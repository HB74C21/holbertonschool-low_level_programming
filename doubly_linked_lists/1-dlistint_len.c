#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * dlistint_len - Function that returns the numbers of elements in a linked
 *		dlistint_t list
 * @h: This is a pointer to the first elements of dlistint_t list
 *
 * Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
