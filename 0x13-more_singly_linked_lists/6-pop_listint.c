#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head node
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	temp  = temp->next;
	free(*head);
	*head = temp;

	return (data);
}
