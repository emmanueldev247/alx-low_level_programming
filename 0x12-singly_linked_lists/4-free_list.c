#include "lists.h"
/**
 * free_list - function that frees a linked list
 * @head: head of the singly list passed
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	free(next);
}
