#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: head node
 * @n: integer data to be added
 *
 * Return: the number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
