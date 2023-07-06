#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: string to observe
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	unsigned int len;

	len = 0;
	if (s[0] == '\0')
		return (0);

	if  (s[0] != '\0')
	{
		len = 1;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
