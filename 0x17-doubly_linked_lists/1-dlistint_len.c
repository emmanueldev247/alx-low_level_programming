#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: head pointer
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (0);

	temp = (dlistint_t *)h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
