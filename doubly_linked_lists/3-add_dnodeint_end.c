#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - Function that adds a new node at the end of
 *			a dlistint_t list
 * @head: This is a pointer of pointer to the first element of the list°t list
 *
 * Return: The address of the new element or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end = malloc(sizeof(dlistint_t));

	if (new_node_end == NULL)
		return (NULL);

	if (head == NULL)
	{
		free(new_node_end);
		return (NULL);
	}

	while (*head != NULL)
		head = &(*head)->next;

	new_node_end->n = n;
	new_node_end->prev = *head;
	*head = new_node_end;
	new_node_end->next = NULL;

	return (new_node_end);
}
