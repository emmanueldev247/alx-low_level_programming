#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: head of the singly list passed
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
