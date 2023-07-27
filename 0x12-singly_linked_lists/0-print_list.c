#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the singly list passed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		i++;
		temp = temp->next;
	}
	return (i);
}
