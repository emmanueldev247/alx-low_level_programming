#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second srting
 *
 * Return: a pointer tot he concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	con_str = malloc(sizeof(char) * (len1  + len2 + 1));

	if (con_str == NULL)
	{
		free(con_str);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		con_str[i] = s1[i];

	for (i = i; i < (len1 + len2); i++)
		con_str[i] = s2[i - len1];
	return (con_str);
}
