#include "lists.h"
/**
 * print_listint_safe - function that prints all the elements of a linked list
 * @h: the singly list passed
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i;
	const listint_t *slow, *fast;

	i = 0;
	slow = head;
	fast = head;

	while(fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;

		printf("[%p] %d\n", (void *)slow, slow->n);
		i++;

		if (fast && fast->next)
		{
			fast = fast->next;
			i++;
		}
	}

	while (slow && slow != fast)
	{

		printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			i++;
	}
	
	return (i);
}
