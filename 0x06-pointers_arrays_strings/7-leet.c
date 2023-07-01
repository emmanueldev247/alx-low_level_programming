#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @text: text
 * Return: returns encoded string
 */
char *leet(char *text)
{
	char letters[10], numbers[10];
	int j, len;

	letters[0] = 'a';
	letters[1] = 'A';
	letters[2] = 'e';
	letters[3] = 'E';
	letters[4] = 'o';
	letters[5] = 'O';
	letters[6] = 't';
	letters[7] = 'T';
	letters[8] = 'l';
	letters[9] = 'L';

	numbers[0] = '4';
	numbers[1] = '4';
	numbers[2] = '3';
	numbers[3] = '3';
	numbers[4] = '0';
	numbers[5] = '0';
	numbers[6] = '7';
	numbers[7] = '7';
	numbers[8] = '1';
	numbers[9] = '1';

	len = 0;
	while (text[len] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (text[len] == letters[j])
				text[len] = numbers[j];
		}

		len++;
	}
	return (text);
}
