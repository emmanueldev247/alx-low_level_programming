#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head node
 * @index: the index of the node
 *
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		temp = temp->next;
	}


	return (temp);
}
