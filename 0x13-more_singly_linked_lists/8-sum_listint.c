#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: head node
 *
 * Return: the sum of data in the list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
