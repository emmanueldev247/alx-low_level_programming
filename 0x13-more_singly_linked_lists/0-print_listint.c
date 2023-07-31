#include "lists.h"
/**
 * print_list - function that prints all the elements of aa listint_t list
 * @h the singly list passed
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;
	const listint_t *temp;

	i = 0;
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
