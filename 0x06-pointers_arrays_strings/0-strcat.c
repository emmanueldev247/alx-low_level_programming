#include "main.h"
/**
 * _strcat - function to concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: return a pointer to the resulting string in dest
 */
char *_strcat(char *dest, char *src)
{
	int src_len, dest_len;

	dest_len = 0;
	src_len = 0;

	while (dest[dest_len] != 0)
		dest_len++;

	while (src[src_len] != 0)
	{
		dest[dest_len] = src[src_len];
		dest_len++;
		src_len++;
	}
	return (dest);
}
