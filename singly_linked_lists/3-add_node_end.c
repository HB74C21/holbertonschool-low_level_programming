#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Function that add a new node at the end of a list_t list
 *
 * @head: This is a pointer to pointer to the first element of the list_t list
 * @str: This is a string for add to the next element
 *
 * Return: The adress of the new element or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end;

	int length_str = 0;

	while (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node_end = malloc(sizeof(list_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->str = strdup(str);

	if (new_node_end->str == NULL)
	{
		free(new_node_end);
		return (NULL);
	}

	while (str[length_str] != '\0')
		length_str++;

	new_node_end->len = length_str;

	while (*head != NULL)
		head = &(*head)->next;

	*head = new_node_end;
	new_node_end->next = NULL;

	return (new_node_end);
}
