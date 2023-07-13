#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function to concatenate arguments
 * @ac: argc
 * @av: *argv[]
 *
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *constr;
	int total_len, len, index, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Getting the total lenght by doubling down on each args*/
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len;
	}

	total_len += ac;  /* adding space for '\n\ and '\0' */
	constr = malloc(sizeof(char) * total_len);
	if  (constr == NULL)
		return (NULL);

	/* Copying the string into constr */
	index = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			constr[index] = av[i][len];
			index++;
			len++;
		}
		constr[index] = '\n';
		index++;
	}
	return (constr);
}
