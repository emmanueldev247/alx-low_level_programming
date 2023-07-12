#include <stdlib.h>
#include "main.h"
/**
 * char *create_array - function that creates an array of chars
 * @size: size of array
 * @c: character to set in array
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */

 char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(c) * size);
	
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
