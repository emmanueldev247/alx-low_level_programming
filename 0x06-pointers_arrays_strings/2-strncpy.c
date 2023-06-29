#include "main.h"
/**
 * _strncpy - function to copy a string at limit  n
 * @dest: destination string
 * @src: source string
 * @n: number of character from src to be copied to dest
 * Return: return a pointer to the resulting string in dest
 */
char *_strncpy(char *dest, char *src, int n)

{
	int src_len, i;

	src_len = 0;

	while (src[src_len] != '\0')
		src_len++;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		} else
			break;
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
