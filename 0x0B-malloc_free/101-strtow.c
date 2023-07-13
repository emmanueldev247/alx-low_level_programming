#include <stdlib.h>
#include "main.h"
/**
 * strtow - function that splits a string into words
 * @str: string to be operated on
 *
 * Return: pointer to an array of string
 */
char **strtow(char *str)
{
	int len, i;
	char **words, letters;

	if (str == NULL || str == "")
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;
	
	words = malloc((len + 1) * sizeof(char));
	if (words = NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		

	}
		


}
