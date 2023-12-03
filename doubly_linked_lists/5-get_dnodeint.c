#include "lists.h"
/**
 * get_dnodeint_at_index - Function that eturns the nth node of a
 *				dlistint_t linked list
 * @head: This is a pointer to the first element of the list
 * @index: This is the index of the node to retrieve
 *
 * Return: The pointer to the nth node, or NULL if the node does not exist
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
