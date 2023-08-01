#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 *					a new node at a given position
 * @head: head node
 * @idx: index of the list where the new node would be added
 * @n: integer data to be added
 *
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
		return (NULL);

	temp = *head;

	for (i = 0; i < idx && temp; i++)
		temp = temp->next;

	new->next = temp->next;
	temp->next = new;

	return (new);
}
