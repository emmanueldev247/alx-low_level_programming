#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to the diplicated string or NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, j;

	i = strlen(str);

	cpy = malloc(sizeof(*str) * i);
	
	if (cpy == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		cpy[j] = str[j];

	return (cpy);


}
