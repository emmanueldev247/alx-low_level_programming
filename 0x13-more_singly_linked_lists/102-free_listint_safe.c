#include "lists.h"
/**
 * free_listint_safe - function that frees a linked list
 * @h: head of the singly list passed
 *
 * Return: nothing
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t i;

	i = 0;

	if (h != NULL)
	{
		current = *h;
		while (current)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*h = NULL;
	}
	return (i);
}
