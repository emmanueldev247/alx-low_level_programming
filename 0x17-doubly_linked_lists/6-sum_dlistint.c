#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data of a dlistint_t linked list
 * @head: head pointer
 *
 * Return: sum; if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int count = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
