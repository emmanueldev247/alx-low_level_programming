#include "main.h"
/**
 * reverse_array - function to reverse the content of an arry
 * @a: array to be reversed
 * @n: number of items in array a
 */
void reverse_array(int *a, int n)
{
	int *head, *tail, temp;

	head = &(a[0]);
	tail = &(a[n - 1]);
	while (head < tail)
	{
		temp = *tail;
		*tail = *head;
		*head = temp;

		head++;
		tail--;
	}

}
