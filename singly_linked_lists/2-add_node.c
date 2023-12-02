#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Function that adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer of pointer to the first element
 * @str: This is the string for add to the next element
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int length_str = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[length_str] != '\0')
		length_str++;

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = length_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
