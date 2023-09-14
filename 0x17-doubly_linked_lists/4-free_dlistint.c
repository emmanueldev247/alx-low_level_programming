#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	if (head == NULL)
		return;

	temp = head;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
