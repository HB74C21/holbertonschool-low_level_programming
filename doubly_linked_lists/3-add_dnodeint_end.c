#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_dnodeint_end - Function that adds a new node at the end of
 *			a dlistint_t list
 * @head: This is a pointer of pointer to the first element of the list°t list
 * @n: This is a number
 *
 * Return: The address of the new element or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node_end = malloc(sizeof(dlistint_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		new_node_end->prev = NULL;
		*head = new_node_end;
		return (new_node_end);
	}

	while (temp->next != NULL)
		temp = temp->next;

	new_node_end->prev = temp;
	temp->next = new_node_end;

	return (new_node_end);
}
