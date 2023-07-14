#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: first value
 * @max: last value
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr, range, i;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		arr[i] = min + i;

	return (arr);
}
