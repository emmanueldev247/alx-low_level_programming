#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes
 *					a node at a given position
 * @head: head node
 * @index: index of the list where the node to be deleted is
 *
 * Return: 1 - success
 *		  -1 - failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current; i++)
		current = current->next;

	if ((current == NULL || current->next == NULL) && index > 0)
		return (-1);

	temp = current->next;
	current->next = temp->next;

	return (1);
}
