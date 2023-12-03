#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data(n) of
 *			a dlistint_t linked list
 * @head: This is the pointer to the first element of the dlistint_t list
 *
 * Return: The sum or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
