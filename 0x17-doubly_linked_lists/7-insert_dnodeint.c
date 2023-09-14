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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer
 * @idx: index of the list where the new node should be added
 * @n: data of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new, *next;
	unsigned int count = 0;
	unsigned int size = 0;

	size = listint_len(*h);
	if (idx > size)
		return (NULL);

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*h == NULL || idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	temp = *h;
	while (temp)
	{
		if (count == idx - 1)
		{
			next = temp->next;
			temp->next = new;
			new->prev = temp;
			new->next = next;
			if (next)
				next->prev = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}

	free(new);
	return (NULL);
}
