#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 *
 * @h: This is a pointer to the first element of the dlistint_t
 *
 * Return: The number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
