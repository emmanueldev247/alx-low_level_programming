#include "main.h"
#include <stdio.h>
/**
 * cap_string - function to capitalize all words of a string
 * @text: text to be converted
 * Return: returns string after conversion
 */


char *cap_string(char *text)
{
	int list[13];
	int i, len;
	char *changed;
	changed = text;
	
	list[0] = 44;
    list[1] = 59;
    list[2] = 46;
    list[3] = 33;
    list[4] = 63;
    list[5] = 34;
    list[6] = 40;
    list[7] = 41;
    list[8] = 123;
    list[9] = 125;
	list[10] = 32;
	list[11] = 9;
	list[12] = 10;


	len = 0;

	while (changed[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if ((changed[0] > 96) && (changed[0] < 123))
			changed[0] = changed[0] - 32;

		if (isChar(changed[i], list))
		{
			changer(changed + i + 1);
		}
	}
	return (changed);
}


int isChar(char c, int *list)
{
	int i;

	for (i = 0; i < 13; i++)
	{
		
		if (list[i] == c)
		{
			return (1);
		}
	}
	return (0);
}

void changer(char *ch)
{
	if ((*ch > 96) && (*ch < 123))
			*ch = *ch - 32;
}
