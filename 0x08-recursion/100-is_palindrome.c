#include "main.h"
#include <stdio.h>
/**
 * is_palindrome -  function that checks if a string is a palindrome
 * @s: string to be checked
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = getLen(s);
	return (helper_drome(s, 0, len - 1));
}

/**
 * getLen - helper function to get the length of a string
 * @s: string to be counted
 *
 * Return: returns the length of the a string
 */
int getLen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + getLen(s + 1));
}

/**
 * helper_drome -  helper function that checks 2 characters are the same
 * @s: string to pick the characters from
 * @start: index of first character
 * @end: index of second character
 *
 * Return: returns 1 if the characters are same, otherwise 0
 */
int helper_drome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	return (helper_drome(s, start + 1, end - 1));
}
