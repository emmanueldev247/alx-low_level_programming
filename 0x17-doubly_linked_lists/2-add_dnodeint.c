#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: head pointer
 * @n: data to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	*head = new;
	new->next = temp;
	temp->prev = new;

	return (new);
}
