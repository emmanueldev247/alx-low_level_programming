#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes
 *					a new node at a given position
 * @head: head node
 * @index: index of the list where the node to be deleted is
 *
 * Return: 1 - success
 *		   0 - failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			*head = NULL;
			return (1);
		}

		*head = temp;
		return (1);
	}

	for (i = 0; i < index - 1 && temp; i++)
		temp = temp->next;
	if (temp == NULL && index > 0)
		return (-1);

	new = temp->next->next;
	temp->next = new;

	return (1);
}
