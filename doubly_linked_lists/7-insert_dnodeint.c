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

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 *                             doubly linked list.
 * @h: Pointer to a pointer to the first element of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: Value to be added in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count;

	temp = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	for (count = 0; count < idx - 1 && temp != NULL; count++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = temp;
	new_node->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
