#include "lists.h"
/**
 * listint_len - function that counts the number of elements in a linked list
 * @h: the singly list passed
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
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
