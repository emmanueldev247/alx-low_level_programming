#include "lists.h"

/**
 * find_listint_loop - function to check if a singly
 *				linked list has a cycle in it
 * @head: the list
 *
 * Return: address of the loop (a cycle is found); NULL (no cycle found)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (head == NULL)
		return (0);

	hare = head;
	tortoise = head;

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}
