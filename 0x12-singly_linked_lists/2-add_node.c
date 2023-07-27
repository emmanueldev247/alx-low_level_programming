#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: head node
 * @str: string to be added
 *
 * Return: the number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;
	
	len = 0;
	while (str[len] != '\0')
		len++;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
