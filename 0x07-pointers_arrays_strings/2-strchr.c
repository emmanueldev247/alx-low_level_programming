#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to search for in s
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			return (s + len);
		}
		len++;
	}

	return (0);
}
