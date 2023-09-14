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

	temp = (dlistint_t *)h;
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
	unsigned int count = 1;
	unsigned int size = 0;

	size = listint_len(*h);
	if (idx >= size)
		return (NULL);

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}

	temp = *h;
	while (temp)
	{
		if (count == idx)
		{
			next = temp->next;
			temp->next = new;
			new->next = next;
			new->prev = temp;
			next->prev = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
