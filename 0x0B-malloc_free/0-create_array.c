#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to be set in array
 *
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';

	return (arr);
}
