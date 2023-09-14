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

	if (*head == NULL)
	{
		*head = new;
		(*head)->n = n;
		return (new);
	}

	temp = *head;
	*head = new;
	(*head)->next = temp;
	(*head)->n = n;

	return (new);
}
