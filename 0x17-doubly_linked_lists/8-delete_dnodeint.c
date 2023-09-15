#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head pointer
 *
 * Return: the number of nodes
 */
size_t listint_len(dlistint_t *h)
{
	dlistint_t *temp;
	int count = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}


/**
 * delete_dnodeint_at_index - function that deletes the node at index 'index'
 * @head: head pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev = NULL, *next = NULL;
	unsigned int count = 0;
	unsigned int size = 0;

	size = listint_len(*head);
	if (index >= size || *head == NULL)
		return (-1);

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			if (temp->next)
				next = temp->next;
			else
				next = NULL;

			if (temp->prev != NULL)
				prev = temp->prev;
			else
				*head = next;

			free(temp);
			temp = NULL;

			if (prev)
				prev->next = next;

			if (next)
				next->prev = prev;
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
