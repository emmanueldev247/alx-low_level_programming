#include "lists.h"
/**
 * list_len - function that counts the number of elements in a linked list
 * @h: the singly list passed
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
