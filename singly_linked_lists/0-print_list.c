#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Function that prints all the elements of a list_t list
 *
 * @h: This is a pointer to the list_t
 *
 * Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
