#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: head node
 * @str: string to be added
 *
 * Return: the number of elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new, *temp;

	len = 0;
	while (str[len] != '\0')
		len++;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
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
