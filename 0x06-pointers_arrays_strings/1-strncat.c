#include "main.h"
/**
 * _strncat - function to concatenate two strings at limit n
 * @dest: destination string
 * @src: source string
 * @n: number of string from src to be appended to dest
 * Return: return a pointer to the resulting string in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int src_len, dest_len, i;

	dest_len = 0;
	src_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n; i++)
	{
		if (src[src_len] != '\0')
		{
			dest[dest_len] = src[src_len];
			dest_len++;
			src_len++;
		}
	}
	return (dest);
}
